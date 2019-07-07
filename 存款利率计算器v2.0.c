#include <stdio.h>
#include <math.h>
int main()
{
    double capital,rate=2,deposit;
    int year;
    char c;
    printf("Input capital, year:");
    scanf("%lf,%d",&capital,&year);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&c);
    switch(year)
    {
    case 1:
        rate=0.0225;
        break;
    case 2:
        rate=0.0243;
        break;
    case 3:
        rate=0.0270;
        break;
    case 5:
        rate=0.0288;
        break;
    case 8:
        rate=0.0300;
        break;
    default:
        rate=-1;
        break;
    }
    if(rate==-1)
    {
        printf("Error year!\n");

    }
    else
    {

        if(c=='Y'||c=='y')
        {
            deposit=capital*pow(1+rate,year);
        }
        else
        {
            deposit=capital*(1+rate*year);
        }
        printf("rate = %.4f, deposit = %.4f\n",rate,deposit);

    }
    return 0;

}
