#include "photo.h"

void FastNlMeansDenoising(Mat src, Mat dst, float h, int search_window, int block_size) {
    cv::fastNlMeansDenoising(*src, *dst, h, search_window, block_size);
}
