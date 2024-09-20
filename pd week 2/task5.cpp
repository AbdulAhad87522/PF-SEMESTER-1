#include <iostream>
using namespace std;
main()
{
cout<<"Name of person: ";
string name;
cin>>name;

cout<<"target weight loss in kilograms: ";
int weight;
cin>>weight;

int days=weight*15;
cout<<name<<" will need "<<days<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestion";
 
 }