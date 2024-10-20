#include<iostream>
using namespace std;
void printasteriks(int rowsize)
{
  for(int row=rowsize;row>=1 ; row--)
  {
    for(int col=1;col<=row ; col++)
    {
        cout<<"*";
    }
    cout<<endl;
  }
}
int main()
{
    int rows;
    cout<<"enter number of rows to print asteriks ";
    cin>>rows;
    printasteriks(rows);
}