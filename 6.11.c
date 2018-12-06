#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int factorial(int n);


int main()
{
    system("color 1E");
    int i,j;
    int sum=0;
    int n;
    scanf("%d",&n);

    for(i=1; sum<n; i++)
    {
        sum+=factorial(i);
    }


    printf("%d",i-2);


    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;

    }
    else
    {
        return n*factorial(n-1);

    }

}
