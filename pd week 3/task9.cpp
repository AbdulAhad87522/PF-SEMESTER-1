#include <iostream>
using namespace std;
main()
{
cout<<"enter a four digit number: ";
int number;
cin>>number;

int sum=0;
sum=sum+(number%10);
number=number/10;

sum=sum+(number%10);
number=number/10;

sum=sum+(number%10);
number=number/10;

sum=sum+(number%10);

cout<<"sum of individual digits: "<<sum;
}