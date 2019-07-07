#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("color 02");
    float p;
    printf("Input payment p:");
    scanf("%f",&p);
    printf("price = %.1f\n",p*0.92);
    return 0;

}
