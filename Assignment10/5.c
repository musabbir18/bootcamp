//Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

int main()
{
    void odd(int);
    int n;
    printf("enter the number:-");
    scanf("%d",&n);
    odd(n);
}

void odd(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
       printf("%d\n",2*i-1);
    }
}