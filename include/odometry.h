#ifndef __ODOMETRY_H__
#define __ODOMETRY_H__

class odometry
{
public:
bool initialization(cv::Mat img1, cv::Mat img2, std::vector<cv::Point2f> kp1, std::vector<cv::Point2f> kp2, cv::Mat R, cv::vec3d t);

bool pnp(cv::Mat img1, cv::Mat img2, std::vector<cv::Point2f> kp1, std::vector<cv::Point2f> kp2, cv::Mat R, cv::vec3d t);

bool triangulate(cv::Mat img1, cv::Mat img2, std::vector<cv::Point2f> kp1, std::vector<cv::Point2f> kp2, cv::Mat R, cv::vec3d t);

bool monocular_odometry(cv::Mat img, cv::Mat R, cv::Mat t);

private:
    cv::Mat last_frame;
    std::vector<cv::Point2f> last_kp;
    std::vector<cv::Point3d> mappoints;

};

#endif
