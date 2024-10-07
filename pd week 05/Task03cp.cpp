#include<iostream>
using namespace std;

int PriceM(float price);
int PriceE(float price);
int PriceS(float price);
int PriceV(float price);
int PriceT(float price);
main()
{   float price;
    char code;
    cout<<"Enter the vehicle type code(M,E,S,V,T) : ";
    cin>>code;

    cout<<"Enter the price: $";
    cin>>price;  

    if (code=='M')
    {
        float finalPrice=  PriceM(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }
    
    if (code=='E')
    {
        float finalPrice= PriceE(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

    if (code=='S')
    {
        float finalPrice=  PriceS(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

    if (code=='V')
    {
        float finalPrice=  PriceV(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

    if (code=='T')
    {
        float finalPrice= PriceT(price); 
        cout<<"The final price of "<<code<<" code vehile after adding tax is $"<<finalPrice;
    }

   
}

int PriceM(float price)
{
   float finalPriceM=(price*0.06)+price;
   return finalPriceM;
}

int PriceE(float price)
{
   float finalPriceM=(price*0.08)+price;
   return finalPriceM;
}
int PriceS(float price)
{
   float finalPriceM=(price*0.1)+price;
   return finalPriceM;
}
int PriceV(float price)
{
   float finalPriceM=(price*0.12)+price;
   return finalPriceM;
}
int PriceT(float price)
{
   float finalPriceM=(price*0.15)+price;
   return finalPriceM;
}