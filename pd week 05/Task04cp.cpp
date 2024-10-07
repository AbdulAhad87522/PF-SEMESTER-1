#include<iostream>
using namespace std;
void work_hours(int hours,int day,int worker);
main()
{
   int hours,day,worker;
    cout<<"Enter the needed hours : ";
    cin>>hours;
    cout<<"Enter the days that the firm has : ";
    cin>>day;
    cout<<"Enter the number of all workers : ";
    cin>>worker;
   
    work_hours(hours,day,worker);
     
}
void work_hours(int hours,int day,int worker)
{
   int work_in_a_day=worker*9;
    int work_in_firm_days=work_in_a_day*day;
    int remaining_hours=work_in_firm_days-hours;

    

    if(hours>remaining_hours)
      cout<<"Not enough time! "<<(-1*remaining_hours)<<" hours needed";
     else
     cout<<"YES! "<<remaining_hours<<" hours left";
}
