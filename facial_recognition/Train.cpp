#include "Train.h"

std::vector<cv::Mat> Train::get_img(std::string name) {
	//retrieves all images of one subject

}

bool Train::add_img(std::string name, cv::Mat img) {
	//Saves image to dirrectory with name
	std::string directory = path + name;
	if (cv::imwrite(directory, img)) {
		return true;
	}
	return false;
}

Train::Train(std::string workspace) {
	path = workspace;
}


Train::~Train() {
}
