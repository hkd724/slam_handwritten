#include <opencv2/opencv.hpp>
#include "feature.h"

class frame
{
public:

    frame(){}
    frame(cv::Mat img_):img(img_){}
    frame(cv::Mat img_, std::vector<feature> keypoint_):img(img_),keypoints(keypoint_){}
    
private:
    cv::Mat img;
    std::vector<cv::Point2f> keypoints;
    //todo:写一个模板以适应不同类型（bool、int、float）的描述子
    std::vector<std::vector<float>> descriptor;
    std::vector<double> score;
    Eigen::Matrix3d R_world;
    Eigen::Vector3d t_world;
}
