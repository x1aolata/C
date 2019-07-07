#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    int i;
    char day[7][10]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf("Please input a single numeral(1-7): ");
    scanf("%d",&n);
    if(n>=1&&n<=7)
    {
        printf("%s\n",day[n-1]);
    }
    else
    {
        printf("Invalid - please input a single numeral(1-7).\n");
    }
}
