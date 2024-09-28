#include <iostream>
using namespace std;
void longest_duration(int hours,int minutes,int min_in_hour);
main()
      {
      int hours,minutes,min_in_hour; 
      cout<<"enter the number of hours: ";
      cin>>hours;
      cout<<"enter the number of minutes: ";
      cin>>minutes;
      longest_duration(hours,minutes,min_in_hour);
      }
    void longest_duration(int hours,int minutes,int min_in_hour)
    {
    min_in_hour=hours*60;
    if(min_in_hour>minutes)
    cout<<hours;
    if(minutes>min_in_hour)
    cout<<minutes; 
    }