#include<stdio.h>
void main()
{
    int n,days ,m,years;
    printf("enter the no. of years:");
    scanf("%d",&n);
    days=365*n;
    
    printf("days: %d",days);
    printf("enter the no. of days:");
    scanf("%d",&m);
    years=m/365;
    printf("years:%d",years);


}