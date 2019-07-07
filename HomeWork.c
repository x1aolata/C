#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int myabs(int a);
void isjishu(int a);
void sanjiao(float a,float b,float c);

int main()
{
    system("color 02");
    int a;
    float b,c,d;
    scanf("%d",&a);
    printf("%d\n",myabs(a));
    isjishu( a);
    scanf("%f %f %f",&d,&b,&c);
    sanjiao( d,b, c);
}


int myabs(int a)
{
    if(a>=0)
    {
        return a;
    }
    else
        return -a;
}

void isjishu(int a)
{
    if(a%2==0)
    {

        printf("Å¼Êý");
    }
    else
        printf("ÆæÊý");
}
void sanjiao(float a,float b,float c)
{

    if(a+b>c&&b+c>a&&a+c>b)
    {
        float p=(a+b+c )/2.0;
        printf("%f",sqrt(p*(p-a)*(p-b)*(p-c)));

    }
    else
        printf("ERROR");

}
