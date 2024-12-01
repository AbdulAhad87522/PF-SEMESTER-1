#include <iostream>
using namespace std;
main()
{
    int size,result,f_result;
    int count,count2 = 0;
    const int num = 100;
    string array[num];
    cout<<"Enter the size of array: ";
    cin>>size;

    for(int i = 0 ; i< size ; i++)
    {
        cout<<"Enter word(right or left): ";
        cin>>array[i];
    }

    for(int i = 0 ; i < size ; i++)
 {
    if(array[i] == "right")
    {
    count++;
    }
    else if(array[i]=="left")
    {
      count2++;
    }
 }

    result = (count*90) - (count2*90);
    f_result = result/360;
    if(f_result<0)
    {
      f_result = -(f_result);
    }
    cout<<"Total rotations will be: "<<f_result<<"."<<endl;
    }