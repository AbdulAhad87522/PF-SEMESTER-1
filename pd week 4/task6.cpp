#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void print_a();
void print_h();
void print_m();
void print_d();
main()
     {
      
      system("cls");
      gotoxy(10,0);
      print_a();
      gotoxy(10,1);
      print_h();
      gotoxy(10,2);
      print_m();
      gotoxy(10,3);
      print_a();
      gotoxy(10,4);
      print_d();
     }
   void gotoxy(int x,int y)
   {
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

   }
   void print_a()
   {
    cout<<"A";  
   }
 
   void print_h()
   {
   cout<<"H";
   }

   void print_m()
   {
   cout<<"M";
   }

   void print_d()
   {
   cout<<"D";
   }