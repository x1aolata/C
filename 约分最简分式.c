#include<stdio.h>
main()
{
    int a,b,i,j;
    scanf("%d/%d",&a,&b);
    for(i=1; i<90; i++)
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
    printf("%d/%d",a,b);
}



