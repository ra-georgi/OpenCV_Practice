#pragma once

class OpenCV_Interact
{
    public:
        enum object_status{INVALID, VALID};
        virtual ~OpenCV_Interact() = default;        
        virtual void display_media()= 0;
        virtual void preprocess_media()= 0;
    private:
        object_status status{INVALID};
};