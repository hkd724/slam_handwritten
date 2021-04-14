#include <opencv2/opencv.hpp>
#include "feature.h" 
#include "odometry.h" 

bool slam::slam()
{
    cv::videocapture cap(0);

    if (!capture.isOpened())  
    {  
        std::cout << "Read video Failed !" << std::endl;  
        return;  
    }

    capture.set(CV_CAP_PROP_FPS,50);
    odometry vio;
    bool stop = false;
    while(!stop)
    {
        cv::Mat img;
        cap>>img;
        if(img.empty())
        {
            std::cout<<"camera has been stop working"<<std::endl;
            break;
        }
        frame f(img,mapx,mapy);
        vio.monocular_odometry(f);
        //可视化
    }
    //todo:写个主函数
}
