#include "../include/opencv_tool.hpp"

int main()
{
    OpenCV_Interact tool{};
    std::cout << tool.get_my_num() << '\n';
    tool.set_my_num(3);
}