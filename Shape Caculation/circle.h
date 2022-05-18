#include "shape.h"
#include <cmath>

const auto pi = 3.14;

class circle : public shape
{
private:
	double radius;

public:
	circle(double radius)
	{
		this->radius = radius;
	}

	double getRadius()
	{
		return radius;
	}

	void setRadius(double radius)
	{
		this->radius = radius;
	}

	double getArea()
	{
		return pi * pow(radius, 2);
	}

	double getPerimeter()
	{
		return pi * 2 * radius;
	}
};
