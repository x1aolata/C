#include<stdio.h>
double factorial( double a)
{
    double temp=1;
    double i;
    if(a==0)
    {
        temp=1 ;
    }
    else
    {

        for(i=1; i<=a; i++)
            temp=temp*i;
    }
    return temp;
}
double product (double a)
{
    double i,k=1;
    double temp;
    temp=1;
    for(i=1; i<=a; i++)
    {
        temp=temp*k;

        k++;
        k++;

    }
    return temp;
}
main()
{

    double a;
    double i=1;
    double sum=0;
    scanf("%lf",&a);

    do
    {

        sum+=factorial(i-1)/product (i);
        printf("%lf\n",sum);
        i++;
    }
    while(factorial(i-1)/product (i)>=a);


    printf("%.6lf",2*sum);




}












