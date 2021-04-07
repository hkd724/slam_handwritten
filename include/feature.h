#include <opencv2/opencv.hpp>

class feature
{
public:
    extractor(cv::Mat img, std::vector<feature> keypoints);
    matcher(cv::Mat img1, cv::Mat img2, std::vector<feature> keypoints1, std::vector<feature> keypoints2);
    
private:
    cv::Point2f location;
    //todo:写一个模板以适应不同类型（bool、int、float）的描述子
    std::vector<float> descriptor;
    double score;

    //todo:先写成根据数字（1,2,3,4）选择匹配器,feature类型，后改为网络结构
    int matcher;
    int feature;
};
