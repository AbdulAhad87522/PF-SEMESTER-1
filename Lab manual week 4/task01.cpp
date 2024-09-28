#include <iostream>
using namespace std;
void calculatefuel();
main()
{

calculatefuel();

}
void calculatefuel()
{ int d,fuel;
 while (true)
{

cout<<"enter the distance: ";
cin>>d;
fuel=d*10;
cout<<"fuel needed: "<<fuel<<endl;
}
}