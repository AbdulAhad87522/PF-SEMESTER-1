#include <iostream> 
using namespace std;
void add(int a,int b);
void subtract(int a,int b);
void multiply(int a,int b);
void divide(int a,int b);
main()
{
      while(true)
      {
      int x,y;
      char op;
      cout<<"enter 1st number: ";
      cin>>x;
      cout<<"enter 2nd number: ";
      cin>>y;
      cout<<"enter operator: "<<op;
      cin>>op;

      if(op=='+')
      {
      	add(x,y);
      }

      if(op=='-')
      { 
      subtract(x,y);
      }
      if(op=='*')
      {
      multiply(x,y);
      }
      if(op=='/')
      {
      divide(x,y);
      }
      }
      }
  
void add(int x,int y)
{
int add;

add=x+y;
cout<<"addition is: "<<add<<endl;
}
void subtract(int x,int y)
{
int subtract;

subtract=x-y;
cout<<"subtracted value is: "<<subtract<<endl;
}
void multiply(int x,int y)
{
 int multiply;

 multiply=x*y;
 cout<<"multiplicated value is: "<<multiply<<endl;
}
void divide(int x,int y)
{
float divide;

divide=x/y;
cout<<"divided value is: "<<divide<<endl;
}