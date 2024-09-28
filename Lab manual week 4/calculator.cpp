#include <iostream> 
using namespace std;
void add(int a,int b);
void subtract(int a,int b);
void multiply(int a,int b);
void divide(int a,int b);
main()
{
 int x,y,op;
 cout<<"enter operator: "<<op;
 if(op=='+')
 add(x,y);

if(op=='-')
 cout<<"enter operator: "<<op;
 subtract(x,y);

if(op=='*')
 cout<<"enter operator: "<<op;
 multiply(x,y);

if(op=='/')
 cout<<"enter operator: "<<op;
 divide(x,y);
}


void add(int a,int b)
{
int x,y,add;
cout<<"enter 1st number: "<<endl;
cout<<"enter 2nd number: "<<endl;
cin>>x,y;
add=x+y;
cout<<"addition is: "<<add<<endl;
}
void subtract(int a,int b)
{
int x,y,subtract;
cout<<"enter 1st number: "<<endl;
cout<<"enter 2nd number: "<<endl;
cin>>x,y;
subtract=x-y;
cout<<"subtracted value is: "<<subtract<<endl;
}
void multiply(int a,int b)
{
 int x,y,multiply;
cout<<"enter 1st number: "<<endl;
cout<<"enter 2nd number: "<<endl;
cin>>x,y;
 multiply=x*y;
 cout<<"multiplicated value is: "<<multiply<<endl;
}
void divide(int a,int b)
{
float x,y,divide;
cout<<"enter 1st number: "<<endl;
cout<<"enter 2nd number: "<<endl;
cin>>x,y;
divide=x/y;
cout<<"divided value is: "<<divide<<endl;
}