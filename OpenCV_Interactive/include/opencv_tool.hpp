#pragma once

#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

class OpenCV_Interact
{
    private:
        enum file_type{IMAGE,VIDEO,INVALID};
        cv::Mat img{};
        cv::VideoCapture cap{};

    public:
        OpenCV_Interact(const std::string& file_path);
        void display_media();
        void print_file_type();
        file_type input_type{};
};