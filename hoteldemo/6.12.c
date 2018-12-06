#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("color 1E");

    double a[2000];
    int i;
    double sum=0;
    for(i=0; i<2000; i++)
    {
        scanf("%lf",&a[i]);
        if(a[i]<=0)
        {
            break;
        }
        sum+= a[i];
    }
    printf("ºÍÎª%lf",sum);
    return 0;
}
