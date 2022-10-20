#include<iostream>
using namespace std;

class coomplex
{
  private:
    int real;
    int img;
    public:
    void set(int x,int y)
    {
         real=x;
         img=y;
    }   
    void print()
    {
        cout<<real <<"+"<<img<<"i";

    }
   
};
int main()
{
    coomplex c1,c2;
    c1.set(3,2);
    c2.set(5,7);
    c1.print();
    c2.print();
}