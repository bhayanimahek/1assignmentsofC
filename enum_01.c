#include<stdio.h>
int checkeven(int);
enum checK{false,true};
void main()
{
    int n,res;
    printf("enter the n:");
    scanf("%d",&n);
    res=checkeven(n);
    if(res==1)
    {
    printf("NO. IS EVEN");}
    else{
        printf("NO. IS ODD");
    }

}
int checkeven(int n)
{
    if(n%2==0)
    {
        return true;

    }
    else{
        return false;
    }

    
}



