#include <iostream>
#include "funset.hpp"
#include "opencv.hpp"
#include "common.hpp"

int main()
{
	int ret = test_opencv_svm_predict();
	
	if (ret == 0) std::cout << "========== test ok ==========" << std::endl;
	else std::cout << "########## test fail ##########" << std::endl;

	return 0;
}

