#include<stdio.h>
void main()
{
    int n,prod=1,i;
    printf("enter the no. n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        prod=prod*i;
    }printf("enter the ans:%d",prod);
}