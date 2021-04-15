#include <opencv2/opencv.hpp>

class feature
{
public:
    //如果extractor已经提出descriptor，就不做descriptor这一步，否则要做
    bool extractor(frame img, std::vector<cv::Point2f> &keypoints, std::vector<std::vector<float>> &descriptor, std::vector<double> &score);
    bool descriptor(frame img, std::vector<std::vector<float>> &descriptor/*, std::vector<cv::Point2f> keypoints*/);
    bool distribute_keypoints(std::vector<cv::Point2f> &keypoints, frame f);
    bool matcher(frame frame1, frame frame2, std::vector<std::pair<int,int>> &matches, std::vector<cv::Point2f> &kp1,std::vector<cv::Point2f> &kp2);
    //从拿到图片到保存完整特征点一次解决
    bool frame_keypoint(frame &f);

    feature(){matcher = 1, feature =1;}
    feature(int matcher_ = 1, int feature_ = 1):matcher(matcher_),feature(feature_){}
    
private:

    //todo:先写成根据数字（1,2,3,4）选择匹配器,feature类型，后改为网络结构
    int matcher;
    int feature;
};
