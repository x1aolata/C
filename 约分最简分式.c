#include "stdio.h"
void main()
{
    int a[10],i,sum=0;
    for(i=0; i<=9; i++)
    {
         printf("Enter the No.%d=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<=9; i++)
        sum=sum+a[i];
    printf("Total=%d\n",sum);
}
