#ifndef _OPENCV3_PHOTO_H_
#define _OPENCV3_PHOTO_H_

#ifdef __cplusplus
#include <opencv2/opencv.hpp>
extern "C" {
#endif

#include "core.h"

void FastNlMeansDenoising(Mat src, Mat dst, float h, int search_window, int block_size);

#ifdef __cplusplus
}
#endif

#endif //_OPENCV3_VIDEO_H_
