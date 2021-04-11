#ifndef __ODOMETRY_H__
#define __ODOMETRY_H__

#include <opencv2/opencv.hpp>
#include <Eigen/Core>

class odometry
{
public:
    bool initialization(frame f1, frame f2);
    bool pnp(frame f1, frame f2);
    bool triangulate(std::vector<cv::Point2f> kp1,std::vector<cv::Point2f> kp2, Eigen::Matrix3d R, Eigen::Vector3d t, std::vector<cv::Point3d> mappoints);
    bool monocular_odometry(frame f);
    bool relocalization(frame f);
    
    void R_w2c();
    void R_c2w();
    void t_w2c();
    void t_c2w();

    odometry(){}
    odometry():(_),(_){}

private:
    //todo:思考frame是否该独立一个文件
    cv::Mat last_frame;
    Eigen::Matrix3d R; 
    Eigen::Vector3d t;
    feature ft;
    std::vector<cv::Point3d> mappoints;
    std::vector<std::vector<float>> descriptor;
    std::map<int, frame> keyframe;
};

#endif
