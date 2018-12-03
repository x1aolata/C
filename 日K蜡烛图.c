#include<stdio.h>
main()
{
    double a,b,c,d;
    int i=0;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    if(d<a)
    {
        printf("BW-Solid");
    }
    if(d>a)
    {
        printf("R-Hollow");
    }
    if(d==a)
    {
        printf("R-Cross");
    }
    if(c<a && c<d)
    {
        printf(" with Lower Shadow");
        i=1;
    }

    if(i==1)
    {
        if(b>a && b>d)
        {
            printf(" and Upper Shadow");
        }
    }
    else if(i==0)
        if(b>a&&b>d)
        {
            printf(" with Upper Shadow");
        }

}
