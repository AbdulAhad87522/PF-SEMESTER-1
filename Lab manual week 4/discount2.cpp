#include <iostream>
using namespace std;
void discount(int price);
main()
{
int price;
while (true)
{
cout<<"enter price: ";
cin>>price;
if (price==500)
{
discount(price);
}
if(price!=500)
{
cout<<price<<endl;
}
}
}
void discount(int price)
{
int dis,discount;
dis=price*0.05;
discount=price-dis;
cout<<"discounted price is: "<<discount;
}
