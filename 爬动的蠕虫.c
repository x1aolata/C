#include<stdio.h>
main()
{
    int n,u,d,i,j,sum;
    scanf("%d %d %d",&n,&u,&d);
    sum=0;
    for(i=1; sum<n; i++)
    {
        sum+=u;
        if(sum<n)
        {
            sum-=d;
            i++;
        }
        else
            break;
    }
    printf("%d",i);
}
