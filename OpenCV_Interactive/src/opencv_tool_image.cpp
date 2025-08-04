#include <opencv2/opencv.hpp>
#include "opencv2/highgui.hpp"
#include "opencv_tool_image.hpp"
#include <string>
#include <iostream>

OpenCV_Interact_Image::OpenCV_Interact_Image(const std::string& file_path)
{
    std::cout << "Hello from OpenCV Interact! \n";
    image = cv::imread(file_path);
    if (image.empty())
    {
        std::cerr << "Error loading image";
    }
    else
    {
        std::cout << "Created OpenCV Interactive object for your image. \n";
        status = VALID;
    }

}

void OpenCV_Interact_Image::display_media()
{
    cv::imshow("Displaying user's image",image);
    cv::waitKey(0);
}

void OpenCV_Interact_Image::preprocess_media()
{
    const int slider_threshold_max{255};
    int slider_threshold_value{127};
    cv::namedWindow("Tuning Thresholding", cv::WINDOW_AUTOSIZE); 
    cv::createTrackbar("Threshold value", "Tuning Thresholding", &slider_threshold_value, slider_threshold_max, ThresholdProcessor::onTrackbar, this);
   
    
}