#include<iostream>
using namespace std;
void amplify(int num_ber)
{
    for(int i=1;i<=num_ber;i++)
    {
        if(i%4==0)
        {
            cout<<i*10<<",";
        }
        else
        {
         cout<<i<<",";
        }
    }
}
int main()
{
    int number;
    cout<<"enter number to amlipfy ";
    cin>>number;
    amplify(number);
} 

