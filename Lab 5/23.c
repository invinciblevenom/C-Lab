/*
Write a program to convert decimal number in to binary number.
*/

#include <stdio.h>

long decToBin (long n) {
	if (n == 0)
		return 0;
	return (n%2 + 10*decToBin(n/2));
}

int main(int argc, const char * argv[]) {
	long n;
	printf("This program will convert a decimal number into binary using recursion.\n\tEnter the decimal number : ");
	scanf("%ld", &n);
	printf("\n\t %ld|d = %ld|b\n\n", n, decToBin(n));
}
