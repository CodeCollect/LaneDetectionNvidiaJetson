//#####################################################################################//
//#####################################################################################//
//#####################################################################################//
//# Please include the Github Repositories web URL if you are using this material.    #//
//#####################################################################################//
//#####################################################################################//
//#####################################################################################//



#include "opencv2/opencv.hpp"
#include <iostream>
#include "opencv2/cudaarithm.hpp"
#include "opencv2/cudafilters.hpp"
#include "opencv2/cudaimgproc.hpp"
#include "opencv2/cudawarping.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "binary.h"

using namespace std;
using namespace cv;


void binaryframe::binary_frame(cuda::GpuMat& src, cuda::GpuMat& dst)
{
	int threshold_value = 110;
	int max_value = 255;
	cuda::threshold(src, dst, threshold_value, max_value, THRESH_BINARY);
}