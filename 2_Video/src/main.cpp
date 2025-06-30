#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture cap("videos/test.mp4");;
    if (!cap.isOpened())
    {
        std::cerr << "Error: Camera not opened \n";
        return -1;
    }

    cv::Mat frame;

    while (true){
        cap >> frame;
        if (frame.empty()) {
            // std::cout << "End of video\n";
            // break;
            cap.set(cv::CAP_PROP_POS_FRAMES, 0);
            continue;
        }

        cv::imshow("Video Playback", frame);

        // Press 'q' to quit early
        if (cv::waitKey(30) == 'q') {
            break;
        }        

    }
    cap.release();
    cv::destroyAllWindows();
    return 0;
}