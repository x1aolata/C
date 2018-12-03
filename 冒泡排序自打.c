#include<stdio.h>
main()
{
    int a[10];
    int i,j;
    int temp;
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        for(j=0; j<10-i; j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }


    }

    printf("%d\n",a[1]);



}


