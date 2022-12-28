#include<stdio.h>
void main()
{
    int n;
    printf("press 0(sunday) 1(monday) 2(tuesday) 3(wednesday) 4(thrusday) 5(friday) 6(saturaday)");
    printf("enter the no. n:");
    scanf("%d",&n);
    switch(n)
    {
        case0 :
        printf("sunday");
    break;
        case 1 :
        printf("monday");
        break;
        case 2 :
        printf("tuesday");
        break;
        case 3 :
        printf("wednesday");
        break;
        case 4 :
        printf("thrusday");
        break;
        case 5 :
        printf("friday");
        break;
        case 6 :
        printf("saturaday");
        break;
        dafault :
        printf("wrong matched");
        break;

    

    }
}