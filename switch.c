#include <stdio.h>
main()
{
 int a,b;
 scanf("%d",&a);
 switch (a)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
    b=31;break;
 case 4:
 case 6:
 case 9:
    b=30;break;
 case 2:
    b=29;break;
 default:
    printf("认真的吗？");
}
if(a<=12&&a>=1)
printf("天数是%d天",b);

}

