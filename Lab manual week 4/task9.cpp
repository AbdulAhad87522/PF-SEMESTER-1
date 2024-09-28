#include <iostream> 
using namespace std;
void calculate_fuel(float distance);
main()
      {
       float distance;
       cout<<"Enter total distance: ";
       cin>>distance;
       
       if(distance<=10)
       cout<<"fuel needed: 100";
       
       if(distance>10)
       calculate_fuel(distance); 
      }
      void calculate_fuel(float distance)
      {
       int fuel;
       fuel=distance*10;
       cout<<"Fuel needed: "<<fuel; 
      }