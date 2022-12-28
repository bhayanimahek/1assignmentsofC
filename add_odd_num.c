#include<stdio.h>
void main()
{
    int i,sum=0,n;
    printf("enter :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
           sum=sum+i;
          
        }
    }printf("%d",sum);
   
}