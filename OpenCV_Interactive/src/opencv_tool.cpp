#include <opencv2/opencv.hpp>
#include <iostream>
#include "../include/opencv_tool.hpp"

OpenCV_Interact::OpenCV_Interact(const std::string& file_path):input_type(INVALID)
{
    std::cout << "Hello from OpenCV Interact! \n";
    img = cv::imread(file_path);

    if (!img.empty())
    {
        std::cout << "Image Loaded \n";
        input_type = IMAGE;
    }
    else
    {
        cap.open(file_path);
        if (cap.isOpened())
        {
            std::cout << "Video Loaded \n";
            input_type = VIDEO;            
        }
    }
    
    if (input_type == INVALID)
    {
        std::cerr << "Error loading media \n";
    }

}

void OpenCV_Interact::print_file_type()
{
    if (input_type == IMAGE)
    {
        std::cout << "File is an image. \n" ;
    }
    else
    {
        std::cout << "File is a video. \n" ;
    }
}

void OpenCV_Interact::display_media()
{
    std::cout << "Displaying media, press q to exit \n";
    if (input_type == IMAGE)
    {
        cv::imshow("Displaying User image",img);
        cv::waitKey();
    }
    else
    {
        cv::Mat video_frame{};

        while (true)
        {
            cap >> video_frame;
            if (video_frame.empty())
            {
                cap.set(cv::CAP_PROP_POS_FRAMES, 0);
                continue;
            }
            cv::imshow("Displaying User video", video_frame);
            if (cv::waitKey(30)=='q')
            {
                break;
            }
        }
    }
}

void OpenCV_Interact::preprocess_media()
{
    std::cout << "Need to incorporate user input and show original and two variants side by side \n";
    cv::Mat combined{};
    cv::Mat gray{};
    
    if (input_type == IMAGE)
    {
        cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);
        cv::cvtColor(gray, gray, cv::COLOR_GRAY2BGR);  // Convert back to 3 channels
        cv::hconcat(img, gray, combined);
        cv::imshow("Displaying User image",combined);
        cv::waitKey();
    }
    else
    {
        cv::Mat video_frame{};

        while (true)
        {
            cap >> video_frame;
            if (video_frame.empty())
            {
                cap.set(cv::CAP_PROP_POS_FRAMES, 0);
                continue;
            }
            cv::cvtColor(video_frame, gray, cv::COLOR_BGR2GRAY);
            cv::cvtColor(gray, gray, cv::COLOR_GRAY2BGR);  // Convert back to 3 channels
            cv::hconcat(video_frame, gray, combined);
            cv::imshow("Displaying User video", combined);
            if (cv::waitKey(30)=='q')
            {
                break;
            }
        }
    }
}