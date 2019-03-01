#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

clock_t start,stop;
double duration;
int main()
{
    system("color 02");
    start=clock();


    stop=clock();
    duration=((double)(stop-clock))/CLK_TCK;
}
