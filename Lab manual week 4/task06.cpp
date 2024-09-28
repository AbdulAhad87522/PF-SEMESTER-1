#include <iostream>
using name spacestd;
void pass();
void fail();
main()
{
while(true)
{
int marks;
cout<<"enter you marks: ";
cin>>marks;
if(marks>50)
pass();
if(marks<50)
fail();
}
}
void pass()
{
cout<<"congarts you are pass"<<endl;
}
void fail()
{
cout<<"ops, you are fail."
}
