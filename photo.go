package gocv

/*
#include <stdlib.h>
#include "photo.h"
*/
import "C"

func FastNlMeansDenoising(src Mat, dst *Mat, f float32, search_window, block_size int) {
    C.FastNlMeansDenoising(src.p, dst.p, C.float(f), C.int(search_window), C.int(block_size))
}
