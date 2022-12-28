#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the a:\n");
    scanf("%d",&a);
    printf("enter the b:\n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d b=%d",a,b);

}