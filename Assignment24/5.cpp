#include<stdio.h>

int main()
{
    void fab(int);
    int n,a=0,b=1,c,i;
    printf("enter the number:");
    scanf("%d",&n);
    fab(n);

}
void fab(int n )
{
    int i,a=0,b=1,c;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
      c=a+b;
      a=b;
      b=c;
    }
  
}