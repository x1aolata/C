#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

clock_t start,stop;
double duration;
void printN1(int N);
void printN2(int N);

int main()
{
    system("color 02");
    int N;

    scanf("%d",&N);
    start=clock();
    printN2(N);
    stop=clock();
    duration=((double)(stop-start))/CLK_TCK;
    printf("%e\n", duration);
}

void printN1(int N)
{
    if(N)
    {
        printN1(N-1);
        printf("%d\n",N);
    }
}

void printN2(int N)
{
    int i;
    for (i=1; i<=N; i++)
    {
        printf("%d\n",i);
    }
}

