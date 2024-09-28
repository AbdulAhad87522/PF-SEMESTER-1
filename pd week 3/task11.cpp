#include <iostream>
using namespace std;
main()
{
cout<<"enter current age: ";
int age;
cin>>age;

cout<<"enter no. of times they have moved: ";
int moved;
cin>>moved;

int same_house=age/(moved+1);
cout<<"average number of years lived in a single house: "<<same_house;
}