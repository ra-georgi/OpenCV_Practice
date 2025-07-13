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

        cv::cvtColor(frame, processed_frame, cv::COLOR_BGR2GRAY);
        cv::blur(processed_frame, processed_frame, cv::Size(3, 3)); // apply blur to grayscaled image
        cv::threshold(processed_frame, processed_frame, 127, 255, cv::THRESH_BINARY); // apply binary thresholding

        std::vector<std::vector<cv::Point>> contours;
        std::vector<cv::Vec4i> hierarchy;
        cv::findContours(processed_frame, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_NONE);

        // Step 3: Draw convex hulls
        for (size_t i = 0; i < contours.size(); ++i) 
        {
            std::vector<cv::Point> hull;
            cv::convexHull(contours[i], hull);
            cv::drawContours(frame, std::vector<std::vector<cv::Point>>{hull}, 0, cv::Scalar(0, 255, 0), 2);
        }

        cv::imshow("Window", frame);

        if (cv::waitKey(30)=='q')
        {
            break;
        }

    }
    cap.release();
    cv::destroyAllWindows();    
    return 0;
}