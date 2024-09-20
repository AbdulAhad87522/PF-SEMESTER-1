#include <iostream>
using namespace std;
main()
{
cout<<"enter the name of movie: ";
string movie;
cin>>movie;

cout<<"enter adult ticket price: ";
int adult;
cin>>adult;

cout<<"enter child ticket price: ";
int child;
cin>>child;

cout<<"enter the amount of adult tickets sold: ";
int adult_tics;
cin>>adult_tics;

cout<<"enter the amount of child tickets sold: ";
int child_tics;
cin>>child_tics;

cout<<"enter the percentage of the amount to be charity: ";
float percentage;
cin>>percentage;

float revenue=(adult*adult_tics)+(child*child_tics);
float donation=(revenue)*(percentage/100);
float profit=revenue-donation;

cout<<"movie: "<<movie<<endl;
cout<<"toatl amount generated from ticket sales: $"<<revenue<<endl;
cout<<"donation to charity: $"<<donation<<endl;
cout<<"remaining profit: $"<<profit;
 }