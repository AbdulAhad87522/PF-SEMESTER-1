#include <iostream>
using namespace std;
void airline(int ticket_price,int discount_price,string country);
main   
    {
    int ticket_price,discount_price;
    string country;
    cout<<"Enter the name of country: ";
    cin>>country;
    cout<<"enter the ticket price in dollars; ";
    cin>>ticket_price;
    airline( ticket_price,discount_price,country);
    }


   void airline(int ticket_price,int discount_price,string country)
   {
   if(country=="pakistan")
   { 
   discount_price=ticket_price-(ticket_price*0.05);
   cout<<"final ticket price after discount is: "<<discount_price<<endl;
   }

   if(country=="ireland")
   {
   discount_price=ticket_price-(ticket_price*0.1);
   cout<<"final ticket price after discount is: "<<discount_price<<endl;  
   }

   if(country=="india")
   {
   discount_price=ticket_price-(ticket_price*0.2);
   cout<<"final ticket price after discount is: "<<discount_price<<endl;
   }

   if(country=="england")
   {
   discount_price=ticket_price-(ticket_price*0.3);
   cout<<"final ticket price after discount is: "<<discount_price<<endl;
   }

   if(country=="canada")  
   { 
   discount_price=ticket_price-(ticket_price*0.4);
   cout<<"final ticket price after discount is: "<<discount_price<<endl;
   }
   }
