#include<stdio.h>
void main()
{
    int n,r,m,r2,r1,sum=0;
    printf("Enter the no. n:");
    scanf("%d",&n);
    m=n;
    int i;
    while(n>=10)
    {
        n=n/10;
        i++;
    }//printf("%d",i);
    for(int j=1;j<=i;j++)
    {
        r=m%10;
        if(j==1)
        {
            printf("last=%d\n",r);
            r1=r;
           
        }
        if(j==i)
        {
            printf("first=%d\n",r);
            r2=r;
            
        }
        m=m/10;
        continue;
       // printf("last=%d",r);
       // if(i>j&& j>i-1)
       //continue; 
//printf("%d",r1+r2);
       // m=m/10;
       
    }printf("%d",r1+r2);

}