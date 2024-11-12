#include<iostream>
using namespace std;

int Calculate_Price(string fruit[],string input,int price[], int quantity);
main()
{
  string  fruit[4] = {"peach", "apple", "guava", "watermelon"};
  int  price[4] = {100, 50, 10, 104};
  string input;
  int quantity;
  cout<<"Enter the fruit (peach, apple, guava, watermelon): ";
  cin>>input;
  cout<<"Quantity";
  cin>>quantity;
  int total=Calculate_Price(fruit,input,price,quantity);
  cout<<"You have to pay: "<<total;
}


int Calculate_Price(string fruit[],string input,int price[], int quantity)
{
    int total=0;
    
    for ( int i = 0; i < 4; i++)
    {
       if(fruit[i]==input)
          total=price[i]*quantity;
    }
    return total;

}