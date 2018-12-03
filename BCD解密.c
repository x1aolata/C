#include<stdio.h>
main()
{
    int a,b,i,j;
    int num[100];
    scanf("%d",&a);
    for(i=0; a>=16; i++)
    {
        b=a%16;
        a=a/16;
        num[i]=b;
    }
    printf("%d",a);
    for(j=i-1; j>=0; j--)
        printf("%d",num[j]);
}
