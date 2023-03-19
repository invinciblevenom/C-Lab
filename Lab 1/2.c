/*
Basic salary of an employee is input through the keyboard. The DA is 25%
of the basic salary while the HRA is 15% of the basic salary. Provident
Fund is deducted at the rate of 10% of the gross salary (BS+DA+HRA).
Program to calculate the Net Salary.
*/

#include <stdio.h>

int main() {
  int DA, HRA, PF, salary, netSalary;
  printf("Enter your salary amount : \t");
  scanf("%d", &salary);
  DA = 0.25 * salary;
  HRA = 0.15 * salary;
  PF = 0.1 * salary;
  netSalary = salary + DA + HRA - PF;
  printf("Your net salary is : %d \n", netSalary);
  return 0;
}
