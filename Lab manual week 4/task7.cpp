#include <iostream>
using namespace std;
void even_number();
void odd_number();
main()
      {
       while(true)
       {
       int number;
       cout<<"enter number: ";
       cin>>number;


       if(number%2==0)
       even_number();

       if(number%2!=0)
       odd_number();
       }
       }

       void even_number()
       {
        cout<<"even number"<<endl;  
       }

       void odd_number()
       {
        cout<<"odd number"<<endl;
       }
