#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter the number";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    
    if(count==2)
    
       cout<<"prime number";
    
    else
    
        cout<<"not prime number";
        cout<<endl;
    
    
}
