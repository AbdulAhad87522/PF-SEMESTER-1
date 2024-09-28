#include <iostream>
using namespace std;
void inch();
main()
{
inch();
}
void inch()
{
while(true)
{
float inch,feet;
cout<<"enter measurement in inch: ";
cin>>inch;
feet=inch/12;
cout<<"Equivalent in feet: "<<feet<<endl; 
}
}