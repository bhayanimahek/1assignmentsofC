#include<stdio.h>
void main()
{
    int SI,P,R,T;
    printf("enter the P:   R:   T:    ");
    scanf("%d%d%d ",&P,&R,&T);
    SI=(P*R*T)/100;
    printf("enter the S.I :%d",SI);
    printf("enter the amt.:%d",P+SI);

}