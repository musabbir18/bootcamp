#include<stdio.h>

int main()
{
    void f(int);
    int n;
    printf("enter the number");
    scanf("%d",&n);
    f(n);
}

void f(int x)
{
    int i;
    int fact=1;
    for(i=1;i<=x;i++)
    {
       fact=fact*i;

    }
    printf("%d",fact);
}