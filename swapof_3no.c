#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    printf("enter the c:");
    scanf("%d",&c);
    a=a+b;
    b=a-b;
    a=a-b;
    b=b+c;
    c=b-c;
    b=b-c;
   
    printf("a=%d b=%d c=%d",a,b,c);
}