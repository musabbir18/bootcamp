#include<stdio.h>

int main()
{
    void pascal(int);
    int row;
    printf("enter the raw:");
    scanf("%d",&row);
    pascal(row);
}
void pascal(int x)
{
   int i,row,j,coef=1;
    for(i=0;i<row;i++)
    {
        for(int space=0;space<=row-i;space++)
        printf(" ");
       for(j=0;j<=i;j++)
       {
           if(j==0 || i==0)
           coef=1;
           else
           coef=coef*(i-j+1)/j;
           printf("% 4d",coef);

       }
        
       printf("\n");
    }
}
