#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include <cstdlib>
#include <iostream>
#include "figure.h"

class Rectangle : public Figure {
public:
	Rectangle();
	Rectangle(std::istream &is);
	Rectangle(size_t length, size_t height);
	Rectangle(const Rectangle& orig);
	double Square() override;
	void Print() override;
	virtual ~Rectangle();
private:
	size_t length;
	size_t height;
};

#endif 