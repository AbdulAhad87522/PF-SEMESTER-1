#include <iostream>
using namespace std;
void vote();
void novote();
main()
{
while(true)
{
int age;
cout<<"enter your age: ";
cin>>age;
if(age>=18)
vote();
if(age<18)
novote();
}
}
void vote()
{
cout<<"you are eligible."<<endl;
}
void novote()
{
cout<<"you are not eligible."<<endl;
}