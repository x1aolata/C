#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main()
{
    system("color 02");
    float l=-1;
    float money;
    int year;
    scanf("%d %f",&year,&money);
    switch(year)
    {
    case 1:
        l=0.0225;
        break;
    default:
        l=1;
        break;

    }
    printf("%f",year*money*l+money);


}
