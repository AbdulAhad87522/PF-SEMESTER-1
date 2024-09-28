#include <iostream>
using namespace std;
void bonus(int friend_position,int your_position);
main()
      {
       int friend_position,your_position;
       cout<<"Enter your position: ";
       cin>>your_position;
       cout<<"Enter your friend's position: ";
       cin>>friend_position;
       bonus(friend_position,your_position);
      }
    
    void bonus(int friend_position,int your_position)
{
if(friend_position-your_position<=6)
cout<<"true"<<endl;
if(friend_position-your_position>6)
cout<<"false"<<endl;
}