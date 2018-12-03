#include<stdio.h>
main()
{
    int a,b;
    int sum=0,num=0;
    scanf("%d %d",&a,&b);
    for(int i=a; i<=b; i++)
    {
        printf("%5d",i);
        num++;
        sum+=i;
        if(num%5==0)
            printf("\n");
    }
    if(num%5==0)
        printf("Sum = %d",sum);
    else
    {
        printf("\n");
        printf("Sum = %d",sum);
    }
}
