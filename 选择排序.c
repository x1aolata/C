#include<stdio.h>
main()
{
    int a[5]= {2,5,4,3,1};
    int i,j,temp;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    for(i=0; i<5; i++)
    {
        printf("%d  ",a[i]);
    }







}
