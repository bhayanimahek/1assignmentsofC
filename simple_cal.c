#include<stdio.h>
void main()
{
    int a=10,b=34,choice;
    printf("enter the 1(add) 2(sub) 3(multi) 4(div) 5(mod)\n ");
    printf("enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
        case 5:
        printf("%d",a%b);
        break;
        default :
        
            printf("wrong matched");
        

    }

    
}