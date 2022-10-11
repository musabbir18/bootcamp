#include<stdio.h>
float fun(float);
int main()
{
    float r=7;
    float area=fun(r);
    printf("%f",area);
}
float fun(float r)
{
   
    return(3.14*r*r);
    
}
