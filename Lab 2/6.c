/*Write a program to find the value of y for a particular value of n. The a, x,
b, n is input by user
if n=1 y=ax%b
if n=2 y=ax2+b2
if n=3 y=a-bx
if n=4 y=a+x/b
*/

#include "iostream"


using namespace std;
int main ()
{
start:
system("cls");
int n ;
int a , x , b ;
cout<<"Enter your choice:"<<endl;
cout<<"1. y=ax%b"<<endl;
cout<<"2. ax2+b2"<<endl;
cout<<"3. y=a-bx"<<endl;
cout<<"4. y=a+x/b\n"<<endl;
cout<<"\n0. Exit\n"<<endl;
cout<<"Choice: ";
cin>>n;
cout<<endl;

if (n == '1')
{
    system("cls");
    cout<<"\nEnter a: ";
cin>>a;
cout<<"\nEnter b: ";
cin>>b;
cout<<endl;
cout<<"\nEnter x: ";
cin>>x;
    cout<<"y = "<<a*x%b<<endl;
    system("pause"); 
    goto start; 
}
else if (n == '2')
{
    system("cls");
    cout<<"\nEnter a: ";
cin>>a;
cout<<"\nEnter b: ";
cin>>b;
cout<<endl;
cout<<"\nEnter x: ";
cin>>x;
    cout<<"y = "<<a*x*x+b*b<<endl;
    system("pause");
    goto start; 
}

else if (n == '3')
{
    system("cls");
    cout<<"\nEnter a: ";
cin>>a;
cout<<"\nEnter b: ";
cin>>b;
cout<<endl;
cout<<"\nEnter x: ";
cin>>x;
    cout<<"y = "<<a-b*x<<endl;
    system("pause");
    goto start; 
}

else if (n == '4')
{
    system("cls");
    cout<<"\nEnter a: ";
cin>>a;
cout<<"\nEnter b: ";
cin>>b;
cout<<endl;
cout<<"\nEnter x: ";
cin>>x;
    cout<<"y = "<<a+x/b<<endl;
    system("pause");
    goto start; 
}

else if (n == '0')
{
    exit(0); 
}
else {

    exit(0); 

}

return 0;
}
