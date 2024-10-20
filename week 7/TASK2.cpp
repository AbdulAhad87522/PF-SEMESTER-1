#include <iostream>
using namespace std;
void printupper_half(int rows) 
{
    for (int i = 1; i <= rows; i++)
     {
        
        for (int j = 1; j <= rows- i; j++) 
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printlower_half(int rows)
 {
    for (int i = rows - 1; i >= 1; i--) 
    {
        for (int j = 1; j <=rows - i; j++) 
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main() 
{
    int rows;
    cout<<"Enter desired number of rows: ";
    cin>>rows;
    printupper_half(rows);
    printlower_half(rows);
}