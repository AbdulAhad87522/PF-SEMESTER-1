#include <iostream>
using namespace std;
void sunday_discount(int amount,int discount);
void else_discount(int amount,int discount);
main()
      {
      while(true)
      { 
       int amount,discount;
       string day;
       cout<<"Enter day: ";
       cin>>day;
       cout<<"enter the total amount of purchase : ";
       cin>>amount;

       if(day=="Sunday")
       sunday_discount(amount,discount);

       if(day!="Sunday")
       else_discount(amount,discount);
       }
       }
void sunday_discount(int amount,int discount)
{
discount=amount-(amount*0.1);
cout<<"discounted price is: "<<discount<<endl;
} 
void else_discount(int amount,int discount)
{
discount=amount-(amount*0.05);
cout<<"discounted price is: "<<discount<<endl;
}