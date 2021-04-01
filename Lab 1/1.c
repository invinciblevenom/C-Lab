/*
Write a program to calculate the area of triangle using formula at=√s(sa)(s-b)(s-c).
*/

#include <math.h>
#include <iostream>

using namespace std;

int main() {
	int s, a = 0, b = 0, c = 0;
	double area;

	do {
		cout << "Input the lenght of the first side of the triangle: ";
		cin >> a;
	} while (!cin.good() || a <= 0);
	do {
		cout << "Input the lenght of the second side of the triangle: ";
		cin >> b;
	} while (!cin.good() || b <= 0);
	do {
		cout << "Input the lenght of the third side of the triangle: ";
		cin >> c;
	} while (!cin.good() || c <= 0);

	s = a + b + c;
	s /= 2;

	area = sqrt(
		s *
		(s - a) *
		(s - b) *
		(s - c)
	);

	cout << "The area of the triangle is " << area << endl;
}
