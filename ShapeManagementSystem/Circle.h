#include "Shape.h"

class Circle : public Shape {
public: 
	int radius;

	Circle(int r);
	void describeSelf() override;
	void listSelf(int index) override;
};