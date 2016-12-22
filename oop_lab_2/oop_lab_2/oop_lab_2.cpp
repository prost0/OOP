// oop_lab_2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "array.h"
using namespace std;

int main()
{
	Rectangle *r = new Rectangle(4, 2);
	cin >> *r;
	TArray ta(5, r);
	cout << ta;
    return 0;
}

