#include<stdio.h>
main()
{
    int m,n,p,q;
    scanf("%d %d %d %d",&m,&n,&p,&q);
    int a[50][50];
    int b[50][50];
    int c[50][50];
    int i,j,k;
    int sum=0;

    for (i=0; i<m; i++)
    {
        for (j=0; j<q; j++)
        {
            c[i][j]=0;
        }

    }





    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }


    }
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            scanf("%d",&b[i][j]);
        }

    }


    for (i=0; i<m; i++)
    {

        for (j=0; j<q; j++)
        {
            for (k=0; k<p; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }

        }

    }


    for (i=0; i<m; i++)
    {
        for (j=0; j<q; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }

}
