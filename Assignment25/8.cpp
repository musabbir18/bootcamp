#include<iostream>
using namespace std;
class circle
{
    private:
    int r;
    float area;
    public:
    void setR(int x)
    {
        r=x;
    }
    int getR()
    {
        return area;
    }
    float cal()
    {
        return(3.14*r*r);
    }

};
int main()
{
    circle c1;
    c1.setR(7);
    cout<<c1.cal();
}