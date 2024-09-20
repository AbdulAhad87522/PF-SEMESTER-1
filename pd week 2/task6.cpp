#include <iostream>
using namespace std;
main()
{
cout<<"enter size of fertilizerof bag in pounds: ";
int weight;
cin>>weight;

cout<<"enter the cost of bag: $";
int cost;
cin>>cost;

cout<<"enter area in square feet that can be covered by the bag: ";
int area;
cin>>area;

int pound_cost=cost/weight;
int cost_per_feet=cost/area;
cout<<"cost of fertilizer per pound: $"<<pound_cost<<endl;
cout<<"cost of fertilizing per square foot: $"<<cost_per_feet;
 }