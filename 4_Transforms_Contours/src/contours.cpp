#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture cap{"../videos/test.mp4"};
    if (!cap.isOpened())
    {
        std::cout << "Error opening video \n";
        return -1;
    }

    cv::Mat frame{};
    cv::Mat processed_frame{};

    while (true)
    {
        cap >> frame;
        if (frame.empty())
        {
            cap.set(cv::CAP_PROP_POS_FRAMES, 0);
            continue;
        }

        cv::cvtColor(frame, processed_frame, cv::COLOR_BGR2GRAY);
        cv::GaussianBlur(processed_frame, processed_frame, cv::Size(5, 5), 0);
        cv::threshold(processed_frame, processed_frame, 127, 255, cv::THRESH_BINARY);

        std::vector<std::vector<cv::Point>> contours;
        std::vector<cv::Vec4i> hierarchy;
        cv::findContours(processed_frame, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_NONE);

        cv::Mat drawing = cv::Mat::zeros(processed_frame.size(), CV_8UC3);
        // for (size_t i = 0; i < contours.size(); i++) {
        //     cv::drawContours(drawing, contours, (int)i, cv::Scalar(0, 255, 0), 2, cv::LINE_8, hierarchy, 0);
        // }
        drawContours(frame, contours, -1, cv::Scalar(0, 255, 0), 2);


        cv::imshow("Original", frame);
        // cv::imshow("Processed", drawing);

        if (cv::waitKey(30)=='q')
        {
            break;
        }
    }
    cap.release();
    cv::destroyAllWindows();    
    return 0;
}