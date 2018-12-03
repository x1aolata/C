#include<stdio.h>

main()
{
    double a[]= {42322,45771,40907,41234,40767};
    double b;//要删除的数据
    int i;
    int c=-1;//下标
    int count=5;
    printf("请输入要删除的数据");
    scanf("%f",&b);
    for(i=0; i<count; i++)
    {
        if(b==a[i])
        {
            //记录下当前的下标
            c=i;
            break;
        }
    }
    if(c==-1)
    {
        printf("没有找到");
    }
    else
    {

        for(i=c; i<4; i++)
        {
            a[i]=a[i+1];
        }
        count--;
    }
    printf("删除后的结果为");
    for(i=0; i<count; i++)
    {
        printf("%.0f  ",a[i]);
    }



}
