/*
Write a program to calculate the area of triangle using formula at=√s(sa)(s-b)(s-c).
*/

#include <math.h>
#include <stdio.h>

int main() 
{
int s, a, b, c;
double area;

printf("Input the length of the first side of the triangle: ");
scanf("%i", &a);
	
printf("Input the length of the second side of the triangle: ");
scanf("%i", &b);

printf("Input the length of the third side of the triangle: ");
scanf("%i", &c);

s = (a + b + c) / 2;
area = sqrt(s *(s - a) * (s - b) * (s - c));

printf("The area of the triangle is %f \n", area);
}
