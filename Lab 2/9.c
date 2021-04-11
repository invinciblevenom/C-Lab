/*
Write a program to generate sum of series 1!+2!+3!+--------------n!
*/

#include "iostream"
using namespace std;
int factorial(int num){
int i;
int fact =1;
i = num;
while(num)
{
    fact *= num;
    --num;

}
return fact;

}

int main()
{
    int n, sum = 0;

    cout << "Enter the value of n : " << endl;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += fact(i);
    }

    cout << "Sum : " << sum << endl;
}
