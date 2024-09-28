#include <iostream> 
using namespace std;
void add(int a,int b);
void mul(int a,int b);
main()
{
int a,b;
while (true)
{
cout<<"enter 1st number: ";
cin>>a;
cout<<"enter 2nd number: ";
cin>>b;
char op;
cin>>op;
if(op=='+')
{
add(a,b);
}
if(op=='*')
{
mul(a,b);
}
}
}
void add(int a,int b)
{
int add=a+b;
cout<<"the addition is: "<<add<<endl;
}
void mul(int a,int b)
{
int mul=a*b;
cout<<"the product is: "<<mul;
}