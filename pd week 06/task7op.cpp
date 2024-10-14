#include <iostream>
using namespace std;
string timing(int starting_hour,int starting_minutes,int arrival_hour,int arrival_minutes);
int hours(int starting_hour,int starting_minutes,int arrival_hour,int arrival_minutes);
main()
{
    int starting_hour,starting_minutes,arrival_hour,arrival_minutes;
    int minute,hour,result;
    string time;
    cout<<"Enter starting time: ";
    cin>>starting_hour;
    cout<<"Enter starting time (minutes): ";
    cin>>starting_minutes;
    cout<<"Student hour of arrival: ";
    cin>>arrival_hour;
    cout<<"Student minutes of arrival: ";
    cin>>arrival_minutes;
    time = timing(starting_hour, starting_minutes, arrival_hour, arrival_minutes);
    result  = hours( starting_hour, starting_minutes, arrival_hour, arrival_minutes);
    cout<<time<<endl;
    if(result>59)
    {
      hour = result/60;
      minute = result%60;
    }
    else if (result<60)
    {
        hour = 0;
      minute = result ;
    }
    if(time == "Early")
    {
        cout<<hour<<":"<<minute<<"hours before the start.";
    }
    if(time == "on time")
    {
        cout<<minute <<"minutes before the start.";
    }
    if(time== "very late")
    {
        cout<<(-1*hour)<<":"<<minute<<"hours after the start.";
    }
}

string timing(int starting_hour,int starting_minutes,int arrival_hour,int arrival_minutes)
{ 
    string late = "on time";
    int time=starting_hour - arrival_hour;
    if(time>0)
    {
      late = "Early";
    }
    if(time<0)
    {
        late = "very late";
    }
    return late;
}

int hours(int starting_hour,int starting_minutes,int arrival_hour,int arrival_minutes)
{
    int hour = (starting_hour*60) + starting_minutes;
    int hour_arrival = (arrival_hour * 60) + arrival_minutes;
    int result = hour - hour_arrival;
    return result;

}