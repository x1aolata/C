#include <stdio.h>
#include <math.h>

int main()
{
    system("color 02");
    float len;
    int day;
    printf("Input length and days:");
    scanf("%f,%d",&len,&day);
    printf("length=%.5f\n",len*pow(0.5,day));
    return 0;

}
