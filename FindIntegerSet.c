#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    system("color 02");
    int A;
    int i,j,k,count=0;



    scanf("%d",&A);

    for(i=A; i<=(A+3); i++)
    {
        for(j=A; j<=(A+3); j++)
        {
            for(k=A; k<=(A+3); k++)
            {
                if(i!=j&&i!=k&&j!=k)
                   {
                    printf("%d%d%d",i,j,k);
                    count++;
                    if(count%6==0)
                        printf("\n");
                    else
                        printf(" ");

                   }
            }
        }
    }





    return 0;
}
