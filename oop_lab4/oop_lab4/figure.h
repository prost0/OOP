#pragma once

class Figure {
public:
	virtual double Square() = 0;
	virtual void Print() = 0;
	virtual void Input() = 0;
	virtual ~Figure() {};
};