#include<iostream>
using namespace std;

class rect
{
    private:
    int a,b;
    
    public:
    void setN(int x,int y)
    {
       a=x;
       b=y;
    }
   int cal()
   {
    return a*b;
   }

  
};
int main()
{
    rect r1;
    r1.setN(2,5);
    cout<<r1.cal();
   
}