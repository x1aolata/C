#include<stdio.h>
#include<math.h>
double a3,a2,a1,a0;

double f(double x)
{
    double y;
    y== a3*x*x*x + a2*x*x + a1*x + a0;
    return y;
}
main()
{

    double a,b;
    double temp;
    int i,j,k;
    scanf("%lf %lf %lf %lf",&a3,&a2,&a1,&a0);
    scanf("%lf %lf",&a,&b);
    temp=f(a);
    printf("%lf",temp);
return 0;    ​
}
