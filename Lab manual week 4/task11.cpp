#include <iostream>
using namespace std;
void name(string user_name);
main()
     {
while(true)
     {
      string user_name;
      cout<<"enter your name: ";
      cin>>user_name;
      name(user_name);   
     } 
     }


     void name(string user_name)
     {
      cout<<user_name<<endl;
      }  