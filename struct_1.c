#include<stdio.h>
 struct employee{
    int emplno;
    char emplnam[20];
    int age;


};
void main()
{
    struct employee e1;
    char ch='y';
    while(ch='y')
    {
        printf("enter the emplno:");
        scanf("%d",&e1.emplno);
        printf("enter the emplnam:");
        scanf("%d",&e1.emplnam);
         printf("enter the age:");
        scanf("%d",&e1.age);
        printf("%d",e1.emplno);
         printf("%s",e1.emplnam);
          printf("%d",e1.age);
          printf("do you want to add more record(y\n):");
          ch=getchar();
    }
}