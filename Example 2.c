#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
    system("color 02");
    int i;
    double a;
    scanf("%d",&i);
    if(i<=100000)
    {
        a=i*0.1;
    }
     if(100000<i<=200000)
    {
        a=i*0.1-(i-100000)*0.025;
    }
     if(200000<i<=400000)
    {
        a=i*0.1-(100000)*0.025-(i-200000)*0.05;
    }
     if(400000<i<=600000)
    {
        a=i*0.1;
    }
     if(600000<i<=1000000)
    {
        a=i*0.1;
    }
     if(1000000<i)
    {
        a=i*0.1;
    }

printf("%lf",a);

}
