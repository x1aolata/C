#include<stdio.h>
main()
{
    int a,b;
    scanf("%d:%d",&a,&b);
    if(a>=0 && a<12)
        printf("%d:%d AM",a,b);
    else if(a==12)
        printf("12:%d PM",b);
    else
        printf("%d:%d PM",a-12,b);
}



