#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void print_maze();
void print_player();
main()
{       system ("cls");
        print_maze();       
      
       int y=1;
       
      while(y<10)
     {  gotoxy(10,y);
       cout<<"P";
       Sleep(500);
       gotoxy(10,y);
       cout<<" ";
       y=y+1;
       gotoxy(10,y);
       cout<<"P";
       Sleep(500);
       if(y==9)
      {  while(y>1)
        { gotoxy(10,y);
          cout<<"P";
          Sleep(500);
          gotoxy(10,y);
          cout<<" ";
          y=y-1;}
      }
     }
     }
   void gotoxy(int x,int y) 
   {
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 
   } 
   void print_maze()
   {
   cout<<"################################"<<endl;
   cout<<"#                              #"<<endl;   
   cout<<"#                              #"<<endl;        
   cout<<"#                              #"<<endl;      
   cout<<"#                              #"<<endl;      
   cout<<"#                              #"<<endl;      
   cout<<"#                              #"<<endl;   
   cout<<"#                              #"<<endl;   
   cout<<"#                              #"<<endl;     
   cout<<"#                              #"<<endl; 
   cout<<"#                              #"<<endl; 
   cout<<"#                              #"<<endl;  
   cout<<"################################"<<endl;
   }

