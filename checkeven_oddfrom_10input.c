#include<stdio.h>
void main()
{
    int n,i,c1,c2;
    printf("enter the 10 no.s:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
           c1++;
        }
         
        else{
            c2++;
        }
       } printf("%d is even",c1);
     printf("%d is odd",c2);
}    
