#include<stdio.h>
main()
{
    int N;
    int i,j;
    int a[100];
    int b[100];
    int q,w,e,r,temp;
    int c,d;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d/%d",&a[i],&b[i]);
    }
    for(i=0; i<N; i++)
    {
        q=a[i];
        w=b[i];
        e=a[i+1];
        r=b[i+1];
        q=q*r;
        temp=w;
        w=w*r;
        e=e*temp;
        r=r*temp;
        c=q+e;
        d=r;
        a[i+1]=c;
        b[i+1]=d;


    }
    b[N-1]*=N;
    for(i=0; i<100; i++)
    {
        for(j=2; j<100; j++)
        {
            if(a[N-1]%j==0&&b[N-1]%j==0)
            {
                a[N-1]=a[N-1]/j;
                b[N-1]=b[N-1]/j;
            }
        }
    }

    if(a[N-1]==b[N-1])
    {
        printf("1");
    }
    else if(a[N-1]==0)
    {
        printf("0");
    }

    else if(a[N-1]<0)
    {
        a[N-1]=-a[N-1];
        printf("-%d/%d",a[N-1],b[N-1]);
    }
    else
    {
        printf("%d/%d",a[N-1],b[N-1]);
    }
}

