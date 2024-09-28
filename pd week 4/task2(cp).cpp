#include <iostream>
using namespace std;
void true_false(string truth_value);
main()
      {
       string truth_value;
       cout<<"enter true or false: ";
       cin>>truth_value; 
       true_false(truth_value);
       }   
    void true_false(string truth_value)
    {
    if(truth_value=="true")
    cout<<"false";
    if(truth_value=="false")
    cout<<"true";
    } 
