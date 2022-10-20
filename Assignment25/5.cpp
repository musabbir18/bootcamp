#include<iostream>
using namespace std;
class Reverse
{
    private:
    int n;
    int result;
    public:
    void setN(int x)
    {
        n=x;
    }
    int getN()
    {
        return n;
    }
    int getR()
        {
            return result;
        }
    int reverse()
    {
        int r,m=0;
        while(n!=0)
        {
            r=n%10;
            m=m*10+r;
            n=n/10;
        }
        result=m;
    }
};
int main()
{
    Reverse r1;
    r1.setN(2321);
   r1.reverse();
    cout<<r1.getR();
}