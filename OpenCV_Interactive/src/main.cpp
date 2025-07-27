#include "../include/opencv_tool_image.hpp"

int main()
{
    OpenCV_Interact_Image tool{"../images/SB.jpg"};
    // OpenCV_Interact tool{"../videos/test.mp4"};
    tool.display_media();
    tool.preprocess_media();
}