#include "Video.h"

void Video::draw_face(std::string label) {
	cv::rectangle(frame, cv::Rect(face_coord, cv::Size(100, 100)), cv::Scalar(0, 150, 0), 3);

}

bool Video::next_frame()
{
	if (cap.read(frame)) {
		face_coord = cv::Point(-1, -1); //resets the face_coord
	}
	return false;
}

bool Video::is_face() {
	//Returns true if there is a face in the frame, also sets the coordinates.
	
	
	return false;
}

Video::Video()
{
	cap = cv::VideoCapture(0);
}


Video::~Video()
{
}
