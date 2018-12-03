#include<stdio.h>
main()
{
    int i,j,N,K,temp;
    scanf("%d %d",&N,&K);
    int a[100];

    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<K; i++)
    {
        for(j=0; j<N-i-1; j++)
        {
            if(a[j]>a[j+1])

            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0; i<N; i++)
    {
        printf("%d",a[i]);
        if(i!=n-1)
          printf(" ");
    }
}


