#include<iostream>
using namespace std;
int pow(int,int);
int main()
{
  int a,b;
  cout<<"enter the no:";
  cin>>a>>b;
  cout<<"output is "<<pow(a,b);
  return 0;
}
int pow(int x,int y)
{
    int a=1,i;
    for(i=1;i<=y;i++)
    a=a*x;
    return a;

}