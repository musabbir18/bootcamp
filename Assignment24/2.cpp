#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;
   int max=-1;
   while(n>0)
   {
    if(max<n%10){
    max=n%10;
    }
    n=n/10;
   }
   
   cout<<"the number is"<<max;
  
}