#include <opencv2/highgui.hpp>

int main(){
    cv::Mat image;
    image = cv::imread("./bg.jpg", cv::IMREAD_COLOR);
    cv::imshow("TEST IMAGE", image);
    cv::waitKey(0);
    return 0;
}