#include<iostream>
using namespace std;
float area(int);
int area(int,int);
int main()
{
    int r;
    cout<<"nter the radius:";
    cin>>r;
    cout<<"area is "<<area(r);
     int l,b;
     cout<<"enter the length and bradth:";
     cin>>l>>b;
     cout<<"area of rect is "<<area(l,b);

}
float area(int r)
{
    return 3.14*r*r;

}
int area(int x,int y)
{
    return x*y;
}
