#include <iostream>
using namespace std;
bool is_vlaid(int numbers[],int size);
main()
{
    int size;
    int numbers[size];
    cout<<"Enter the size of array: ";
    cin>>size;
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>numbers[i];
    }

    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 0 ; j < i - 1 ; j ++) 
        {
            if(numbers[j+1]<numbers[j])
            {
                int temp = numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1];
            }
        }
    }

    cout<<"The final result will be: ";
    if(is_vlaid(numbers,size))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}
    bool is_vlaid(int numbers[],int size)
    {

    for (int i = 0 ; i < size-4 ; i++)
    {
        if((numbers[i+1]-numbers[i]) == (numbers[i+3]-numbers[i+2]))
        {
            return true;
        }
        if((numbers[i+1] == numbers[i]) || (numbers[i+3] == numbers[i+2]))
        {
            return false;
        }        
    }
    }