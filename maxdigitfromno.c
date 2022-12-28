#include<stdio.h>
void main()
{
    long int max=0,min=9,n,m,r;
    printf("Enter the no. n");
    scanf("%d",&n);
    m=n;
   // int i=0;
    while(n!=0)
    {
        r=n%10;
        if(r<min)
        min=r;
        if(r>max)
        max=r;
        n=n/10;
       // i++;

    }
    printf(" max=%d min=%d in number n=%d",max,min,m);

}