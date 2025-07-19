#pragma once

#include <opencv2/opencv.hpp>
#include <iostream>

class OpenCV_Interact
{
    private:
        // cv::Mat frame{};
        int special_num{1};

    public:
        OpenCV_Interact();
        int get_my_num();
        void set_my_num(int ip);

};