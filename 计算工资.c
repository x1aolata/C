#include <stdio.h>
main()
{
    int a,b,c;
    float sum;
    scanf("%d %d",&a,&b);

    if (a<5)
    {
        c=30;
    }
    else
    {
        c=50;
    }

    if(b<=40)
    {
        sum=b*c;
    }
    else
    {
        sum=b*c*1.5-20*c;
    }

    printf("%.2f",sum);
}
