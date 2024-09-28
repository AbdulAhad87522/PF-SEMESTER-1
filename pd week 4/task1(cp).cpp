#include <iostream>
using namespace std;
void true_false(int num_1,int num_2);
main()
      {
       int num_1;
       int num_2;
       cout<<"Enter first number: ";
       cin>>num_1;
       cout<<"Enter second number: ";
       cin>>num_2;
        true_false(num_1,num_2);
      }
   void true_false(int num_1,int num_2)
   {
   if(num_1==num_2)
   cout<<"true";
   if(num_1!=num_2)
   cout<<"false";
  }  