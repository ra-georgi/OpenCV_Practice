#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture cap{"../videos/test.mp4"};

    if (!cap.isOpened())
    {
        std::cout << "Error opening video";
        return -1;
    }

    cv::Mat frame{};
    cv::Mat processed_frame{};
    
    while (true)
    {
        cap >> frame;
        if (frame.empty())
        {
            cap.set(cv::CAP_PROP_POS_FRAMES,0);
            continue;
        }

        cv::resize(frame, processed_frame, cv::Size(480, 640));
        cv::flip(processed_frame, processed_frame, 0);

        cv::imshow("Original", frame);
        cv::imshow("Processed", processed_frame);

        // Press 'q' to quit early
        if (cv::waitKey(30) == 'q') {
            break;
        }          
    }

    return 0;
}