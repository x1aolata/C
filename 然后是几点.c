#include<stdio.h>
main()
{
    int time,minute;
    scanf("%d %d",&time,&minute);
    int a,b,c,d,e,f;
    a=time/100;
    b=time-a*100;
    c=minute/60;
    d=minute-60*c;
    a+=c;
    b+=d;
    if (b>=60)
    {
        e=b/60;
        f=b-e*60;
        a=a+e;
        b=f;

    }else if(b<0)
    {
        a-=1;
        b+=60;
    }
    printf("%d",a*100+b);

}
