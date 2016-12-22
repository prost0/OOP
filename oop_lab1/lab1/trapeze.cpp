#include "stdafx.h"
#include "trapeze.h"
#include <cmath>
#include <algorithm>


Trapeze::Trapeze() : Trapeze(0, 0, 0, 0) {
}
Trapeze::Trapeze(size_t sb, size_t bb, size_t ls, size_t rs) : smaller_base(sb), bigger_base(bb), left_side(ls), right_side(rs){
	if (smaller_base > bigger_base) {
		std ::swap(smaller_base, bigger_base);
	}
	std::cout << "Trapeze created: " << smaller_base << ", " << bigger_base << ", " << left_side << "," << right_side << std::endl;
}
Trapeze::Trapeze(std::istream &is) {
	is >> smaller_base;
	is >> bigger_base;
	is >> left_side;
	is >> right_side;
}
Trapeze::Trapeze(const Trapeze& orig) {
	std::cout << "Trapeze copy created" << std::endl;
	smaller_base = orig.smaller_base;
	bigger_base = orig.bigger_base;
	left_side = orig.left_side;
	right_side = orig.right_side;
}
double Trapeze::Square() {
	if (bigger_base > smaller_base && smaller_base > 0) {
		return double(((smaller_base + bigger_base) / 2) * sqrt(left_side * left_side - pow((((bigger_base - smaller_base) * (bigger_base - smaller_base) + left_side * left_side - right_side * right_side) / (2 * (bigger_base - smaller_base))), 2)));
	}
	else if (bigger_base == smaller_base) {
		if (left_side == right_side) {
			return left_side * smaller_base;
		}
		else {
			std::cerr << "Such trapeze can't exist" << std::endl;
		}
	} else {
		std::cerr << "Error, bigger base < smaller base" << std::endl;
	}
	
}
void Trapeze::Print() {
	std::cout << "smaller_base = " << smaller_base << ", bigger_base = " << bigger_base << ", left_side = " <<  left_side << ", right_side = " << right_side << std::endl;
}
Trapeze::~Trapeze() {
	std::cout << "Trapeze deleted" << std::endl;
}