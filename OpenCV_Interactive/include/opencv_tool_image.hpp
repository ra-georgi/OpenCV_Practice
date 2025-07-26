#pragma once
#include "opencv_tool_interface.hpp"
#include <string>

class OpenCV_Interact_Image : public OpenCV_Interact
{
public:
    OpenCV_Interact_Image(const std::string& file_path);
    void display_media() override;
    void print_file_type() override;  
    void preprocess_media() override;  
};