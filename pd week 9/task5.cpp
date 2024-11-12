#include<iostream>
using namespace std;
bool Slot(string input[]);
main()
{
    string input[4];
    cout<<"Enter the slot machine input:  "<<endl;
    for (int idx = 0; idx < 4; idx++)
    {
        cin>>input[idx];
    }
   
   cout<< Slot(input);
    
}

bool Slot(string input[])
{
    for (int i = 1; i < 4; i++)
    {
        if(input[i]!=input[0])
          return false;
    }
    return true;
}
