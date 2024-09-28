#include <iostream>
using namespace std;
void discounted_amount(int);
main()
      {
       int amount;
       string day;
       cout<<"Enter the day of purchase: ";
       cin>>day;
       cout<<"Enter the total purchase amount: ";
       cin>>amount;
       if(day=="Sunday")
      {
       discounted_amount(amount); 
      }
       if(day!="Sunday")
      {
       cout<<"Payable amount: "<<amount;
      }
      }
       void discounted_amount(int amount)
      {
       int discounted_price;
       discounted_price=amount-(amount*0.1);
       cout<<"Payable amount: "<<discounted_price;
       } 