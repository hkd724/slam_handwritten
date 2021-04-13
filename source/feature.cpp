#include "feature.h"
#include <opencv2/opencv.hpp>

bool feature::extractor(cv::Mat img, std::vector<feature> keypoints)
{

}

bool feature::matcher(frame frame1, frame frame2, std::vector<std::pair<int,int>> matches, std::vector<cv::Point2f> kp1,std::vector<cv::Point2f> kp2);
{
    for(int i=0;i<matches.size();i++)
    {
        return 
    }

}

bool feature::frame_keypoint(frame f)
{
    std::vector<std::vecotr<float>> desc;
    std::vector<cv::Point2f> kp;
    std::vector<double> score;

    ft.extractor(f,kp,desc,score);
    if(desc.empty())
    {
        ft.descriptor(f, desc);
    }
    f.keypoints=kp;
    f.descriptor=desc;
    if(!score.empty()) {f.score=score;}
}
