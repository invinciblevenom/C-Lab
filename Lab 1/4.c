/*
Write a program to find the largest of three numbers using nested if else.
*/

#include <stdio.h>

int main(void) {
  int a, b, c;
  // 5 2 3 (Enter numbers with space)
  printf("Enter any three numbers to find largest among them: ");
  scanf("%d %d %d", &a, &b, &c);
  if(a > b) {
    if(a > c)
      printf("\nThe number %d is largest", a);
    else
      printf("\nThe number %d is largest", c); 
  } else {
    if(b > c)
      printf("\nThe number %d is largest", b);
    else
      printf("\nThe number %d is largest", c);
  }
  return 0;
}
