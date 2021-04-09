/*
Write a program to calculate the area of triangle using formula at=√s(sa)(s-b)(s-c).
*/

#include <math.h>
#include <stdio.h>

int main() {
	int s, a = 0, b = 0, c = 0, ch = 0;
	double area;

	do {
		printf("Input the lenght of the first side of the triangle: ");
		scanf("%i", &a);
		// clean up the input buffer in case of bad characters
		while((ch = getchar()) != '\n' && ch != EOF);
	} while (a <= 0);

	do {
		printf("Input the lenght of the second side of the triangle: ");
		scanf("%i", &b);
		while((ch = getchar()) != '\n' && ch != EOF);
	} while (b <= 0);
	do {
		printf("Input the lenght of the third side of the triangle: ");
		scanf("%i", &c);
		while((ch = getchar()) != '\n' && ch != EOF);
	} while (c <= 0);

	s = a + b + c;
	s /= 2;

	area = sqrt(
		s *
		(s - a) *
		(s - b) *
		(s - c)
	);

	printf("The area of the triangle is %f \n", area);
}
