#include<iostream>
using namespace std;

class Square
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
    int cal()
    {
        int r;
        r=n*n;
      result=r;
    }
  
};
int main()
{
    Square s1;
    s1.setN(5);
    s1.cal();
    cout<<s1.getR();
}