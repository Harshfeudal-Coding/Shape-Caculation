#include "shape.h"

class rectangle : public shape
{
private:
	double length;
	double width;

public:
	rectangle(double length, double width)
	{
		this->length = length;
		this->width = width;
	}

	double getLength()
	{
		return length;
	}

	double getWidth()
	{
		return width;
	}

	void setLength(double length)
	{
		this->length = length;
	}

	void setWidth(double width)
	{
		this->width = width;
	}

	double getArea()
	{
		return length * width;
	}

	double getPerimeter()
	{
		return 2 * (length + width);
	}
};
