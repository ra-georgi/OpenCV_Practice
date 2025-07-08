#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture cap{"../videos/test.mp4"};

    if (!cap.isOpened())
    {
        std::cout << "Error opening camera";
        return -1;
    }
    
    cv::Mat frame{};
    cv::Mat bw_frame{};
    cv::Mat processed_frame{};

    while (true)
    {
        cap >> frame;
        if (frame.empty())
        {
            cap.set(cv::CAP_PROP_POS_FRAMES, 0);
            continue;
        }

        // Convert to grayscale
        cv::cvtColor(frame, bw_frame, cv::COLOR_BGR2GRAY);
        // cv::Canny(bw_frame, processed_frame, 50, 150);
        cv::Canny(bw_frame, processed_frame, 100, 200);
        cv::imshow("Processed Frame", processed_frame);
        cv::imshow("Grayscale Frame", bw_frame);       
        
        // Press 'q' to quit early
        if (cv::waitKey(30) == 'q') {
            break;
        }          

    }

    cap.release();
    cv::destroyAllWindows();

    return 0;
}