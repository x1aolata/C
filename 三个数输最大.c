#include<stdio.h>
main()
{
   int a,b,c,d,max;
   printf("请输入三个数：\n");
   scanf("%d %d %d",&a,&b,&c);
   d=a>b?a:b;
   max=d>c?d:c;
   printf("最大的数是：%d\n",max);

}
