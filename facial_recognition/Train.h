#pragma once
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

class Train
{
private:
	std::string path;
	std::vector<std::string> names;
	
public:
	std::vector<cv::Mat> get_img(std::string name);
	bool add_img(std::string name, cv::Mat img);

	Train(std::string workspace);
	~Train();
};

