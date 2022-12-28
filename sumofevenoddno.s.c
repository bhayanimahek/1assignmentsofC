 #include<stdio.h>
 void main()
 {
    int a[10],evesum=0,oddsum=0;
    printf("enter the no.s");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            evesum=evesum+a[i];
        }
        else{
            oddsum=oddsum+a[i];
        }
    }
    printf("%d\n",evesum);
    printf("%d",oddsum);

 }