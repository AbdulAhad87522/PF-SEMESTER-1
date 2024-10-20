#include<iostream>
using namespace std;
int triangles(int number)
{
    int dots;
    dots=(number*(number+1))/2;
    return dots;
}
int main()
{
    int num_triangles;
    cout<<"enter number of triangles ";
    cin>>num_triangles;
    cout<<"dots in triangle are "<< triangles( num_triangles);

}