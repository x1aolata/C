#include<stdio.h>
int factorsum(int num);
int main()
{
    int i;
    for(i=1; i<10000; i++)
    {
        if(i==factorsum(factorsum(i))&&i!=factorsum(i)&&i<factorsum(i))
        {
            printf("(%4d,%4d)\n",i,factorsum(i));
        }
    }
    return 0;
}
int factorsum(int num)
{
    int sum=0;
    int i;
    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
