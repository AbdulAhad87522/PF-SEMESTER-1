#include <iostream>
using namespace std;
void menu( float width,float height,float length,float volume,string unit);
main(){
    float width,height,length,volume,result;
    string unit;
    menu(width,height,length,volume,unit);
    
    volume=(width*length*height)/3;
    if(unit=="cm"||"centimeter")
    {
         result=volume*1000000;
    cout<<"the volume in cm is: "<<result;
    }
    if(unit=="mm"||"millimeter")
    {
    result=volume*1000000000;
    cout<<"the volume in mm is: "<<result;
    }
    if(unit=="m"||"meter")
    {
    result=volume*1;
    cout<<"the volume in m is: "<<result;
    }
    if (unit=="km"||"kilometer")
    {
    result=volume/1000000000;
    cout<<"the volume km is: "<<result;
    }
    }
    void menu( float width,float height,float length,float volume,string unit)
    {
        cout<<"Enter width of pyramid: ";
    cin>>width;
    cout<<"Enter length of pyramid: ";
    cin>>length;
    cout<<"enter height of pyramid: ";
    cin>>height;
    cout<<"Enter desired output unit(millimeters,centimeters,meters,kilometers): ";
    cin>>unit;
    }
