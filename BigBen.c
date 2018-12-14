#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
    system("color 02");
    int hour;
    int minutes;
    int i,j,k;

    scanf("%d:%d",&hour,&minutes);

    if(hour>=0&&hour<=9)
    {

        if(minutes>9)
        {
            printf("Only 0%d:%d.  Too early to Dang.",hour,minutes);
        }
        else
            printf("Only 0%d:0%d.  Too early to Dang.",hour,minutes);
    }
    else if(hour>=9&&hour<=12)

    {

        if(minutes>9)
        {
            printf("Only %d:%d.  Too early to Dang.",hour,minutes);
        }
        else
            printf("Only %d:0%d.  Too early to Dang.",hour,minutes);
    }
    else
    {
        j=hour-12;
        if(minutes>0)
        {
            j++;
        }
        for(i=0; i<j; i++)
        {
            printf("Dang");
        }
    }



    return 0;
}
