//Write a function to check whether a given number is even or odd. Return 1 if the
//number is even, otherwise return 0. (TSRS)

#include<stdio.h>

int main()
{
    int even(int);
    int x;
    printf("enter the number:-");
    scanf("%d",&x);
     int d;
     d=even(x);
     printf("%d",d);
}
int even(int y)
{
    if(y%2==0)
    {
    return 1;
    }
    else
    {
    return 0;
    }

}