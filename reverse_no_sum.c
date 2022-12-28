#include<stdio.h>
void main()
{
    int i,n,r,r1=0;
    printf("Enter the no. n:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        r1=r1+r;
        n=n/10;
       // printf("")
    }printf("%d",r1);
}