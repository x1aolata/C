#include<stdio.h>
main()
{
    int i,j,k,m;
    scanf("%d",&m);
    for(i=1; i<m+1; i++)
    {
        for(j=1; j<=i; j++)
        {
            k=i*j;
            printf("%d*%d=%-4d",j,i,k);


            if(i==j&&i<m)
            {
                printf("\n");
            }
        }

    }
}


