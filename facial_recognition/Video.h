#pragma once
#include "opencv2/highgui.hpp"
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/face.hpp"
#include <string>

class Video
{
private:
	cv::VideoCapture cap;
	cv::Mat frame;
	cv::Point face_coord;
public:
	void draw_face(std::string label);
	cv::Mat get_frame() {
		return frame;
	}
	bool next_frame();
	bool is_face();
	Video();
	~Video();
};

