/*
Write a program to construct a Fibonacci series upto n terms.
*/
#include "iostream"
using namespace std;

int main() {

  unsigned long x,y,z,n;
  x=0;
  y=1;
  cout<<"Enter No of Elemets: "<<endl;
  cin>>n;
  cout<<x<<" "<<y;
  for(int i = 2; i < n ; ++i)
  {
    z = x+y;
    cout<<" "<<z;
    x = y;
    y = z;
  } 
  
    return 0;
}
