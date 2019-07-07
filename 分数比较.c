#include <stdio.h>
int main()
{
    int a1,a2,b1,b2;
    printf("Input a/b, c/d:");
    scanf("%d/%d,%d/%d",&a1,&a2,&b1,&b2);
    if(a1*b2>a2*b1)
        printf("%d/%d>%d/%d\n",a1,a2,b1,b2);
    if(a1*b2<a2*b1)
        printf("%d/%d<%d/%d\n",a1,a2,b1,b2);
    if(a1*b2==a2*b1)
        printf("%d/%d=%d/%d\n",a1,a2,b1,b2);
    return 0;
}
