#include "odometry.h"
#include "feature.h"
#include <opencv2/opencv.hpp>

bool odometry::initialization(cv::Mat img1, cv::Mat img2, std::vector<cv::Point2f> kp1, std::vector<cv::Point2f> kp2, cv::Mat R, cv::vec3d t)
{
    i
}

bool odometry::pnp(cv::Mat img1, cv::Mat img2, std::vector<cv::Point2f> kp1, std::vector<cv::Point2f> kp2, cv::Mat R, cv::vec3d t)
{

}

bool odometry::triangulate(cv::Mat img1, cv::Mat img2, std::vector<cv::Point2f> kp1, std::vector<cv::Point2f> kp2, cv::Mat R, cv::vec3d t)
{

}

bool odometry::monocular_odometry(cv::Mat img, cv::Mat R, cv::Mat t)
{
    static bool is_initialized = false;
    if(!is_initialized)
    {

    }
}
