#include <iostream>
using namespace std;
float studio(int stay,string month);
float appartment(int stay,string month);
main()
{
    string month;
    int stay;
    float price_studio,price_appartment;
    cout<<"Enter number of stays: ";
    cin>>stay;
    cout<<"Enter month : ";
    cin>>month;
    price_studio = studio( stay, month);
    price_appartment=appartment(stay,month);
    cout<<"studio"<<price_studio<<endl;
    cout<<"appartment"<<price_appartment;
}

float studio(int stay,string month)
{
    float price_studio;
   if(month=="may" || month == "october")
    {
    price_studio = 50*stay;
    if(stay>=7 && stay<=14)
    {
     price_studio = price_studio - (price_studio*0.05);
    }
    if(stay>14)
    {
     price_studio = price_studio - (price_studio*0.3);
    }
    }
    if(month == "june" ||month == "september")
    {
      price_studio =  75.2* stay;
     if(stay>14)
     {
        price_studio = price_studio - (price_studio*0.2);
     }
    }
    if(month == "july"|| month == "august")
    {
        price_studio = price_studio = 76* stay;
    }
    return price_studio;
}

float appartment(int stay,string month)
{
    float appartment_price;
    if(month=="may" || month == "october")
    {
    appartment_price = 65*stay;
    if(stay>14)
    {
     appartment_price = appartment_price - (appartment_price*0.1);
    }
    }
    if(month == "june" ||month == "september")
    {
      appartment_price =  68.7* stay;
     if(stay>14)
     {
        appartment_price = appartment_price - (appartment_price*0.2);
     }
    }
    if(month == "july"|| month == "august")
    {
        appartment_price = 77* stay;
          if(stay > 14)
        {
            appartment_price=appartment_price-(appartment_price*0.1);
        }
    }
    return appartment_price;
}