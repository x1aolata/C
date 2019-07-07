#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int hour1,minute1,hour,minute,hour2,minute2;
    printf("Input time one(hour, minute):");
    scanf("%d,%d",&hour1,&minute1);
    printf("Input time two(hour, minute):");
    scanf("%d,%d",&hour2,&minute2);
    hour=fabs(hour1*60+minute1-hour2*60-minute2)/60;
    minute=fabs(hour1*60+minute1-hour2*60-minute2)-hour*60;
    printf("%d hour %d minute\n",hour,minute);
    return 0;

}
