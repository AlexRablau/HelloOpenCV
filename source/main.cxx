// Hello World

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include "fmt/core.h"

#include <iostream>
#include <vector>

int main(int argc, char** argv) {
  std::cout << "Hello open cv world!" << std::endl;
  
  cv::Mat image(128, 128, CV_8UC3, cv::Vec3b(0, 0, 0));
  
  image.at<cv::Vec3b>(64, 64) = cv::Vec3b(255, 0, 0);
  
  cv::circle(image, {64, 64}, 20, cv::Vec3b(0, 0, 255));
  
  cv::putText(image, "Hello OpenCV", {20, 20}, cv::FONT_HERSHEY_COMPLEX, 0.5, cv::Vec3b(0, 255, 0));
  
  cv::imwrite("./image.png", image);
}
