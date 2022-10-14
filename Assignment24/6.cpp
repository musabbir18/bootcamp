#include<iostream>
using namespace std;

int main()
{
    void swap(int,int);
    int a,b;
    cout<<"enter the number:";
    cin>>a>>b;
    swap(a,b);
}
void swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x <<y;
}