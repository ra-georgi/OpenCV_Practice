#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture cap{"../videos/test.mp4"};
    cv::Mat frame;
    cv::Mat t_frame;

    if (!cap.isOpened())
    {
        std::cerr << "Error opening video";
        return -1;
    }

    while (true)
    {
        cap >> frame;
        if (frame.empty()) {
            // std::cout << "End of video\n";
            // break;
            cap.set(cv::CAP_PROP_POS_FRAMES, 0);
            continue;
        }

        // Convert to grayscale
        cv::cvtColor(frame, t_frame, cv::COLOR_BGR2GRAY);
        // cv::threshold(t_frame, t_frame, 127, 255, cv::THRESH_BINARY);
        // t_frame = cv.adaptiveThreshold(t_frame,255,cv.ADAPTIVE_THRESH_MEAN_C,cv.THRESH_BINARY,11,2);
        cv::adaptiveThreshold(t_frame, t_frame, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY, 11, 2);


        
        // Show both
        cv::imshow("Color Frame", frame);
        cv::imshow("Grayscale Frame", t_frame);

        // Press 'q' to quit early
        if (cv::waitKey(30) == 'q') {
            break;
        }  

    }
    cap.release();
    cv::destroyAllWindows();
    return 0;
}






