#include<stdio.h>
#include<math.h>



int main()
{
    int fun(int,int,int);
    int p,r,t;
    printf("enter the p r t:-");
    scanf("%d %d %d",&p,&r,&t);
    int d;
    d=fun(p,r,t);
    printf("%d\n",d);
}
int fun(int a,int b,int c)
{
  
    return(a*b*c)/100;
}