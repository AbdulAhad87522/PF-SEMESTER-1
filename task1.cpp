#include <iostream>
using namespace std;
string activity(string temperature,string humidity);
main()
{
    string temperature,humidity,to_do;
    cout<<"Enter temperature: ";
    cin>>temperature;
    cout<<"Enter humidity: ";
    cin>>humidity;
    to_do=activity( temperature, humidity);
    cout<<to_do;
}

string activity(string temperature,string humidity)
{
    string game;
    if(temperature=="warm" && humidity == "dry")
    {
      game="play tennis";
    }
    if(temperature=="warm" && humidity == "humid")
    {
        game="swim";
    }
    if(temperature=="cold" && humidity == "dry")
    {
        game="play basket ball";
    }
    if(temperature=="cold" && humidity == "humid")
    {
        game = "watch tv";
    }
    return game;
}