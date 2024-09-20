#include <iostream>
using namespace std;
main()
{
cout<<"enter number of minutes: ";
int min;
cin>>min;

cout<<"enter frames per seconds: ";
int fps;
cin>>fps;

int r=min*fps*60;
cout<<"Total number of frames: "<<r; 
 }