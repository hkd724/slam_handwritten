#include "odometry.h"
#include "feature.h"
#include <opencv2/opencv.hpp>
#include <fstream>

bool odometry::initialization(frame f1, frame f2);
{   
    std::vector<std::pair<int,int>> matches;
    //匹配好的kp1,kp2，匹配关系已经一一对应
    std::vector<cv::Point2f> kp1,kp2;

    ft.frame_keypoint(f1);
    ft.frame_keypoint(f2);
    ft.matcher(f1,f2,matches,kp1,kp2);

    cv::findFundmentalMat(kp1,kp2,);
}

bool odometry::pnp(frame f1, frame f2);
{

}

//todo:建立odometry里面的keypoint容器，只有这个点匹配数量大于k时才可以三角化
bool odometry::triangulate_2point(std::vector<cv::Point2f> kp1,std::vector<cv::Point2f> kp2, Eigen::Matrix3d R, Eigen::Vector3d t, std::vector<cv::Point3d> mappoints);
{

}

bool odometry::monocular_odometry(frame f)
{
    static bool is_initialized = false;
    if(!is_initialized)
    {
        if(last_frame == NULL)
        {
            f.R_world = Eigen::Matrix3d::Zero();          
            f.t_world = Eigen::Vector3d(0,0,0);
            last_frame = frame;
            return false;
        }
        else
        {
            initialization(last_frame, f);
        }
    }
    else
    {
        if(!pnp(last_frame, f))
        {
            relocalization(f);
        }
    }
    fstream fs("output.txt",ios::app);
    fs<<R<<std::endl<<t<<std::endl<<std::endl;
}

bool odometry::relocalization()
{

}
