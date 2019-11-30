#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <string>
#include <stdio.h>


using std::string;

int main() {
  std::cout << "OPENCV READ IMAGE .." << std::endl;
  printf("OPENCV_VERSION: %s\r\n", OPENCV_VERSION);

  string img_name = "im.jpg"

  cv::Mat im = cv::imread(img_name);

  cv::imshow("Image", im);
  cv::cvWaitKey(0);

  return 0;
}
