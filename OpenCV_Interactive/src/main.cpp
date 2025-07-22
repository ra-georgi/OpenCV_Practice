#include "../include/opencv_tool.hpp"

int main()
{
    // OpenCV_Interact tool{"../images/SB.jpg"};
    OpenCV_Interact tool{"../videos/test.mp4"};
    tool.print_file_type();
    // tool.display_media();
    tool.preprocess_media();
}