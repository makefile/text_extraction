#pragma once
#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport) 
#else
#define DLL_API __declspec(dllimport) 
#endif

DLL_API cv::Mat text_extract(char* img_file, char* classifier_dir, bool grey_result = false, char* groudtruth_img_file = 0);
DLL_API cv::Mat text_extract(Mat& img, char* classifier_dir, bool grey_result = false, char* groudtruth_img_file = 0);
