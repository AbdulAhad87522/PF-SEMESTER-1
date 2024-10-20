#include<iostream>
using namespace std;
bool isprime(int number)
{
    int flag=1;
    for (int i = 2; i < number; i++)
    {
        if(number%i==0)
        flag++;
    }
    if (flag==1)
    {
         return true;
    }
    else
    return false ;
}
 int pronomial(int number)
 {
  int count = 0;
    int num_ber = 2;
    int product = 1;
    while (count<number)
    {
      if (isprime(num_ber)) 
      {
          product = product*num_ber;
          count++;
        }
        num_ber++;
    }

    return product;
    }
int main()
{
 int number;
 cout<<"enter a number ";
 cin>>number;
 cout<<pronomial(number);

}