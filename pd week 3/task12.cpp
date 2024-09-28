#include <iostream>
using namespace std;
main()
{
cout<<"number of square meters you can paint: ";
int meters;
cin>>meters;

cout<<"width of side wall: ";
int width;
cin>>width;

cout<<"length of side wall: ";
int length;
cin>>length;

int paint=meters/(width*length);
cout<<"number of walls youcan paint: "<<paint;
}