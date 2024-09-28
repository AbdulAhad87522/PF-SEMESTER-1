#include <iostream>
using namespace std;
main()
{
cout<<"enter vegetable price per kilogram (in coin): ";
float vegetable_price;
cin>>vegetable_price;

cout<<"enter fruit price per kilogram (in coins): ";
float fruit_price;
cin>>fruit_price;

cout<<"enter total kilograms of vegetables: ";
int kg_vege;
cin>>kg_vege;

cout<<"enter kilograms of fruits: ";
int kg_fruits;
cin>>kg_fruits;

float earning=(fruit_price*(1/1.94)*kg_fruits)+(vegetable_price*(1/1.94)*kg_vege);
cout<<"total earning in Rupees (Rps): "<<earning;

 
 }
