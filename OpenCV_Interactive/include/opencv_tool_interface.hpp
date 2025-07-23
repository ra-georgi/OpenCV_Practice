#pragma once

class OpenCV_Interact
{
    public:
        virtual ~OpenCV_Interact() = default;        
        virtual void display_media()= 0;
        virtual void print_file_type()= 0;  
        virtual void preprocess_media()= 0;  
};