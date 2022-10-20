#include<iostream>
using namespace std;

class large
{
    private:
    int a,b,c,big;
    public:
    void setN(int x,int y,int z)
    {
        x=a;
        y=b;
        z=c;
    }
    int getA()
    {
        return a;
        
    }
     int getB()
    {
     
        return b;
      
    }
     int getC()
    {
        
        return c;
        
    }
     int getB()
    {
        
        return big;
    }
    int find()
    {
        if((a<b)&&(a<c))
        {
            cout<<a;
        }
        else if((b<a)&&(b<c))
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
};

int main()
{
    large l1;
    l1.setN(23,12,45);
    l1.find();
    cout<<l1.find();

}
