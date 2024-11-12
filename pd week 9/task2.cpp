#include<iostream>
using namespace std;
int ticket_price(string movies[],string input);

main()
{
  string  movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
  string input;
  cout<<"Enter movie(Gladiator, StarWars, Terminator, TakingLives, TombRider): ";
  cin>>input;

  cout<<"Ticket Price:"<<ticket_price(movies,input);
}

int ticket_price(string movies[],string input)
{
    for(int i=0;i<5;i++)
    {
       if(movies[i]==input)
        {if(i%2==0)
          return 0.1*500;
         if(i%2!=0) 
         return  0.05*500;}
     }
}