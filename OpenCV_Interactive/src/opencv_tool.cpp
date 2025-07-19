#include <opencv2/opencv.hpp>
#include <iostream>
#include "../include/opencv_tool.hpp"

OpenCV_Interact::OpenCV_Interact()
{
    std::cout << "Hello from OpenCV Interact! \n";
}

int OpenCV_Interact::get_my_num()
{
    return special_num;
}

void OpenCV_Interact::set_my_num(int ip)
{
    special_num = ip;
    std::cout << "special_num changed to " << special_num << ". \n" ;
}
