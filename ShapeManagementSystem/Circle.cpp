#include "Circle.h"

Circle::Circle(int r) {
	radius = r;
}

void Circle::describeSelf() {
	std::cout << "This circle has a radius of " << this->radius << endl;
}

void Circle::listSelf(int index) {
	std::cout << "Circle " << index << " radius: " << this->radius << std::endl;
}