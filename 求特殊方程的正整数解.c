#include<stdio.h>
#include<math.h>
main()
{
    int x,y,n;
    int a=1;
    scanf("%d",&n);
    for(x=1; x<=71; x++)
    {

        for(y=x; y<=100; y++)
        {
            if(pow(x,2)+pow(y,2)==n)
            {
                if(x<=y)

                    printf("%d %d\n",x,y);
                    a=0;


            }
        }
    }
    if(a==1)
        printf("No Solution");
}
