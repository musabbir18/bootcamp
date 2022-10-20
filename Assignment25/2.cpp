#include<iostream>
using namespace std;

class Time
{
    private:
    int hours;
    int min;
    int sec;

    public:
    void set(int x,int y,int z)
    {
       hours=x;
       min=y;
       sec=z;
    }
    void print()
    {
        cout<<hours<<"hr "<<min<<"min "<<sec<<"sec";

    }

};
int main()
{
    Time t1,t2,t3;
    t1.set(3,45,20);
    
    t1.print();
   

}