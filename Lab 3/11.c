/*
Write a program to print the entire prime no between 1 and 300.
*/

#include<stdio.h>
int main()
{
    int num, max=300, i, flag;
    for(num=1;num<=max;num++)
    {
        flag=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0 & num!=1)
            printf("%d\t", num);
    }
}
