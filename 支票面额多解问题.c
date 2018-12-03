#include<stdio.h>
main()
{
    int f,y,i;
    int n;

    for(n=1; n<=100; n++)
    {
        printf("%-5d",n);

        i=0;
        for(y=0; y<100; y++)
        {
            for(f=0; f<100; f++)
            {
                if(200*y+2*f+n==100*f+y)
                {
                    printf("%d.%d \n",y,f);
                    i++;
                }
            }




        }
        if(i<1)
            printf("No Solution \n");
    }
}
