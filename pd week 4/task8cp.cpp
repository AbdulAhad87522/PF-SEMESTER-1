#include <iostream> 
using namespace std;
void pet(int holidays,int working_days);
main()
      {
       int holidays;
       cout<<"holidays: ";
       cin>>holidays;
       int working_days=365-holidays;
       pet(holidays,working_days);
      }
   void pet(int holidays,int working_days)
   {
    float play_hours=(holidays*127)+(working_days*63);
    float total_time=(30000-play_hours)/60;
    if(total_time>30000)
    cout<<"tom sleeps well "<<endl<<total_time<<" hours for play";
    if(total_time<30000)
    cout<<"tom will run away "<<endl<<-1*(total_time)<<" hours for play";
   }