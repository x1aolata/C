#include<stdio.h>
main()
{
    int q,w,e,r;
    int temp;
    int a,b;
    int i,j;
    scanf("%d/%d %d/%d",&q,&w,&e,&r);
    q=q*r;
    temp=w;
    w=w*r;
    e=e*temp;
    r=r*temp;
    a=q+e;
    b=r;
    if(a==b)
        printf("1");
    else
    {
        for(i=0; i<100; i++)
        {
            for(j=2; j<100; j++)
            {
                if(a%j==0&&b%j==0)
                {
                    a=a/j;
                    b=b/j;
                }
            }
        }
        if(b==1)
            printf("%d",a);
        else
        printf("%d/%d",a,b);
    }
}
