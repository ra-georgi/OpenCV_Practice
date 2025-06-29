#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{   
    cv::Mat img = cv::imread("images/SB.jpg");
    if (img.empty())
    {
        std::cerr << "Image not found \n";
        return -1;
    }

    cv::imshow("A dream", img);
    cv::waitKey();

    bool success = cv::imwrite("images/output_SB.jpg", img);
    if (!success)
    {
        std::cerr << "Error saving image \n";
        return -1;
    }
    return 0;
}