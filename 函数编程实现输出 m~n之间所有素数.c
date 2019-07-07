#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int IsPrime(unsigned int n);
unsigned int InputNumber(char ch);
int PrimeSum(unsigned int m, unsigned int n);
int main()
{
    int m = 0,n = 0,sum = 0,i = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
    }
    while(m > n && printf("n must be not smaller than m! Input again!\n"));    //保证m<=n
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}



unsigned int InputNumber(char ch)
{
    int digit,ret;

    while(1)
    {
        printf("Please input the number %c(>1):",ch);
       ret=scanf("%d",&digit);
        if(digit>1&&ret==1)
            break;
        else
        {
            fflush(stdin);
            printf("The input must be an integer larger than 1!\n");

        }


    }
    return digit;
}
int IsPrime(unsigned int n)
{
    int i;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return 0;//不是素数返回假
    }
    return 1;//返回真，“1”
}
int PrimeSum(unsigned int m, unsigned int n)
{
    int j,s=0;
    for(j=m; j<=n; j++)
        if(IsPrime(j))
        {
            s+=j;
            printf("%d\n",j);

        }

    return s;


}

