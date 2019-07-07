#include<stdio.h>
void main()
{
    int a[6];
    int times1,times2;
    int i,j;
    for(i=0; i<6; i++)
    {
        scanf("%d",&a[i]);

    }

    i=0;
    j=1;

    for(times1=0; times1<6; times1++)
    {
        j--;
        if(j==-1)
        {
            j=5;
        }
        i=j;
        for(times2=0; times2<6; times2++)
        {

            printf("%d ",a[i]);  i++;
            if(i==6)
            {
                i=0;
            }

        }
        printf("\n");
    }

}
