#include <opencv2/opencv.hpp>

class feature
{
public:
    bool extractor(frame img);
    bool descriptor(frame img/*, std::vector<cv::Point2f> keypoints*/);
    bool matcher(cv::Mat img1, cv::Mat img2, std::vector<feature> keypoints1, std::vector<feature> keypoints2);

    feature(){matcher = 1, feature =1;}
    feature(int matcher_ = 1, int feature_ = 1):matcher(matcher_),feature(feature_){}
    
private:

    //todo:先写成根据数字（1,2,3,4）选择匹配器,feature类型，后改为网络结构
    int matcher;
    int feature;
};
