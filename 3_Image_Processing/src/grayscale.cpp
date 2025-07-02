#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture cap{"../videos/test.mp4"};
    if (!cap.isOpened())
    {
        std::cerr << "Error opening video";
        return -1;
    }

    cv::Mat frame;
    cv::Mat gray;    

    while (true){
        cap >> frame;
        if (frame.empty()) {
            // std::cout << "End of video\n";
            // break;
            cap.set(cv::CAP_PROP_POS_FRAMES, 0);
            continue;
        }

        // Convert to grayscale
        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        // Show both
        cv::imshow("Color Frame", frame);
        cv::imshow("Grayscale Frame", gray);

        // Press 'q' to quit early
        if (cv::waitKey(30) == 'q') {
            break;
        }        

    }
    cap.release();
    cv::destroyAllWindows();
    return 0;
}



