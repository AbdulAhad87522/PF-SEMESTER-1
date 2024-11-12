#include<iostream>
using namespace std;
bool check_pin(int pin[]);
void Dance_moves(string Moves[],int pin[]);
main()
{
    string Moves[10]={"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
    int pin[4];
    cout<<"Enter Four digits PIN: ";
    for (int  i = 0; i < 4; i++)
    {
        cin>>pin[i];
    }
    
    Dance_moves(Moves,pin);

        
}
void Dance_moves(string Moves[],int pin[])
{
    string move[4];
       
      for(int idx=0;idx <10;idx++ )
      {
         for (int i = 0; i < 4; i++)
         {
             if(idx==i)
             move[i]=Moves[idx];
             
         }
     }

     for (int i = 0; i < 4; i++)
     {
         cout<<move[i]<<"  ";
     }
     
}