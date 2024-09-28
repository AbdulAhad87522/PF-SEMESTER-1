#include <iostream>
using namespace std;
void capacity(int people,int tissue_rolls);
main()
      {
       int people,tissue_rolls;
       cout<<"number of people: ";
       cin>>people;
       cout<<"number of tissue rolls: ";
       cin>>tissue_rolls;
       capacity(people,tissue_rolls);
      }
  void capacity(int people,int tissue_rolls)
  {
   int days;
   days=(tissue_rolls*500)/(people*57);
   if(days<=14)
   cout<<"your tissue roll will only last "<<days<<" days, buy more";
   if(days>14)
   cout<<"Your TP will last "<<days<<" days, no need to panic!";
  }