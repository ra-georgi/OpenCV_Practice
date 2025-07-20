#include "../include/opencv_tool.hpp"

int main()
{
    OpenCV_Interact tool{"../images/SB.jpg"};
    tool.print_file_type();
}