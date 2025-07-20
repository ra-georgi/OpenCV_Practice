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
        std::cout << "File is an video. \n" ;
    }
}
