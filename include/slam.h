#include <opencv2/opencv.hpp>

class slam:
{
public:
    slam(){}
    slam(std::string file_name){read_parameter(file_name);}
    run()
private:
    cv::Mat<double> K,DistCoeff;
    cv::Mat mapx,mapy;
}
