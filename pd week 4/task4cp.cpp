#include <iostream>
using namespace std;
void check_speed(int speed);
mian()
      {
       int speed;
       cout<<"speed: ";
       cin>>speed;
       check_speed(speed);
       }


       void check_speed(int speed)
       {
       if(speed>100)
       cout<<"halt...YOU WILL BE CHALLANGED!!!";
       if(speed<=100)
       cout<<"YOU ARE GOING GOOD";
       }