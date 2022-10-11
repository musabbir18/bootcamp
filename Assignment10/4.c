//Write a function to print first N natural numbers (TSRN)

#include<stdio.h>

int main()
{
    void num(int);
     int n;
        printf("enter the number:-");
        scanf("%d",&n);
      num(n);  
     

}
void num(int x)
{
     int i,n;
     for(i=1;i<=x;i++)
     {
        printf("%d",i);
     }
}