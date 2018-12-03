#include<stdio.h>
main()
{
    long a[99999];
    int i;
    int n;
    scanf("%d",&n);
    a[0]=1;
    a[1]=1;
    for(i=2; i<n; i++)
    {

        a[i]=a[i-1]+a[i-2];
    }

    printf("%ld",a[n-1]);
}
