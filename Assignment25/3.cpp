#include<iostream>
using namespace std;
class facto
{
   private:
   int n;
   int fact;

   public:
   void setN(int x)
   {
      n=x;
   }
   int getN()
   {
    return n;
   }
   int getFact()
   {
    return fact;
   }
   void calFact()
   {
    int f=1,i;
    if(n==0)
    {
        fact=1;
      return;

    }
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    fact=f;
   }
};
int main()
{
    facto f1,f2;
    f1.setN(5);
    f2.setN(6);
    f1.calFact();
    f2.calFact();
    cout<<f1.getFact()<<endl;
    cout<<f2.getFact();
}