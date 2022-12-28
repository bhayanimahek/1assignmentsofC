#include<stdio.h>
void main()
{
    int a=1,b=1,c,i,n;
    printf("Enter the no. n:");
    scanf("%d",&n);
     printf("%d\t %d\t",a,b);
    for(i=0;i<=n;i++)
    {
        c=a+b;
       // printf("%d %d",a,b);
        printf("%d\t",c);
        a=b;
        b=c;
       // printf("%d",c); 
        
    }//printf("%d",c);
    
}