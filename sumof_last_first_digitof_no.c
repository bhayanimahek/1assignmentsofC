#include<stdio.h>
void main()
{
    int first,last,n;
    printf("enter the no. n:");
    scanf("%d",&n);
    last=n%10;
    while(n>10)
    {
        n=n/10;
    }
    first=n;
    printf("%d %d\n",last,first);
    printf("%d",first+last);

}