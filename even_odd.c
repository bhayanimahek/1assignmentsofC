#include<stdio.h>
//#define b even
//#define c odd
void main()
{
    int n;
    
    printf("enter the no. n:");
    scanf("%d",&n);
    n=n%2==0?printf("%d is the even no.",n):printf("%d is odd no.",n);
    
}
