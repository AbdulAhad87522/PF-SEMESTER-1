#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void print_name(int ,int);
main()
      {
       int x,y;
       system ("cls");
       cout<<"enter x: ";
       cin>>x;
       cout<<"enter y: ";
       cin>>y;
       print_name(x,y);
      }
   void gotoxy(int x,int y)
   { 
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
    }
    void print_name(int x,int y)
    {
     gotoxy(x,y);
     cout<<"ABDUL AHAD";
 
     
    } 

 