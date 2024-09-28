#include <iostream>
using namespace std;
void stickers();
main()
{
 stickers();
}
void stickers()
{
while(true)
{
int sides,stickers;
cout<<"enter sides of rubik's cube: ";
cin>>sides;
stickers=(sides*sides)*6;
cout<<"number of stickers needed: "<<stickers<<endl;
}
}