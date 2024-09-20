#include <iostream>
using namespace std;
main()
{
cout<<"enter imposter count: ";
float imposter;
cin>>imposter;

cout<<"enter player count: ";
float player;
cin>>player;

float chance=100*(imposter/player);
cout<<"chance of bering an imposter: "<<chance<<"%"s; 
 }