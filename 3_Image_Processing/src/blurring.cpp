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
    cv::Mat bw_frame;
    cv::Mat processed_frame;

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
        cv::GaussianBlur(bw_frame, processed_frame, cv::Size(5, 5), 0);

        //Segmentation
        cv::adaptiveThreshold(bw_frame, bw_frame, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY, 11, 2);
        cv::adaptiveThreshold(processed_frame, processed_frame, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY, 11, 2);
        // Show both

        cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(4, 4));
        cv::morphologyEx(processed_frame, processed_frame, cv::MORPH_OPEN, kernel);

        cv::imshow("Blurred Frame", processed_frame);
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