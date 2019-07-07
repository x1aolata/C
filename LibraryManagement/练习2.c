
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x,y;
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    x=x1+x2;
    y=y1+y2;
    if(fabs(x)<0.05)
        x=fabs(x);
    if(fabs(y)<0.05)
        y=fabs(y);
    printf("(%.1f, %.1f)",x,y);
    return 0;
}
