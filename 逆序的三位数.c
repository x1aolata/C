#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/100;
    a=a-100*b;
    c=a/10;
    a=a-10*c;
    printf("%d",a*100+c*10+b);
}
