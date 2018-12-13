#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
    system("color 02");
    int count;
    int floor=0;
    int remainder=0;
    char a;
    int i,j,k,l;
    int temp;
    scanf("%d %c",&count,&a);
    for(i=1; i*i*2-1<=count; i++)
    {
        if(i*i*2-1<=count)
        {
            floor=2*i-1;
            remainder=count-i*i*2+1;
        }
    }
    //printf("%d\n",2*i-3);
    // printf("%c\n",a);
    // printf("*******************************\n");
    temp=2*i-3;
    j=temp;
    for(j; j>0; j-=2)
    {
        for(l=0; l<(temp-j)/2; l++)
        {
            printf(" ");
        }
        for(k=0; k<j; k++)
        {
            printf("%c",a);

        }
        printf("\n");
    }
    for(j=3; j<=temp; j+=2)
    {
        for(l=0; l<(temp-j)/2; l++)
        {
            printf(" ");
        }
        for(k=0; k<j; k++)
        {
            printf("%c",a);

        }
        printf("\n");
    }
    // printf("%d\n",floor);
    printf("Ê£Óà¸öÊý=%d",remainder);
    return 0;
}
