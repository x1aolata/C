#include<stdio.h>
main()
{
    int f,y,i=0;
    int n;
    scanf("%d",&n);

    for(y=0; y<100; y++)
    {
        for(f=0; f<100; f++)
        {
            if(200*y+2*f+n==100*f+y)
            {
                printf("%d.%d",y,f);
                i++;
            }
        }




    }
    if(i<1)
        printf("No Solution");
}
