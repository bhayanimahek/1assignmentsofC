#include<stdio.h>
#define PL 3.14
void main()
{  
     int r,l,b,d,h,bas,t;
    float c;
    printf("enter the radius:");
    scanf("%d",&r);
    c=PL*r*r;

   printf("area of cirlce:%f",c);
    printf("enter the l: b:");
    scanf("%d %d",&l,&b);
     d=l*b;

    printf("area of rectangle:%d",d);
    printf("enter the bas:  height:");
    scanf("%d %d",&bas,&h);
    t=0.5*bas*h;
    printf("area of triangle:%d",t);



}