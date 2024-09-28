#include <iostream>
using namespace std;
void flower_shop(int red_rose,int white_rose,int tulip);
main()
     {
      int red_rose,white_rose,tulip;
      cout<<"number of red roses: ";
      cin>>red_rose;
      cout<<"number of white_roses: ";
      cin>>white_rose;
      cout<<"number of tulips: ";
      cin>>tulip;
      flower_shop(red_rose,white_rose,tulip);
     }
    void flower_shop(int red_rose,int white_rose,int tulip)
    {
     float original_price,discount_price;
     original_price=(red_rose*2)+(white_rose*4.10)+(tulip*2.5);
     cout<<"original price is: "<<original_price<<endl;
     discount_price=original_price-(original_price*0.2);
     if(original_price>200)
     cout<<"price after discount is: "<<discount_price;
     if(original_price<=200)
     cout<<"sorry you do not meet our discount requirements,your bill is "<<original_price;
    }