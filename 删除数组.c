#include<stdio.h>

main()
{
    double a[]= {42322,45771,40907,41234,40767};
    double b;//Ҫɾ��������
    int i;
    int c=-1;//�±�
    int count=5;
    printf("������Ҫɾ��������");
    scanf("%f",&b);
    for(i=0; i<count; i++)
    {
        if(b==a[i])
        {
            //��¼�µ�ǰ���±�
            c=i;
            break;
        }
    }
    if(c==-1)
    {
        printf("û���ҵ�");
    }
    else
    {

        for(i=c; i<4; i++)
        {
            a[i]=a[i+1];
        }
        count--;
    }
    printf("ɾ����Ľ��Ϊ");
    for(i=0; i<count; i++)
    {
        printf("%.0f  ",a[i]);
    }



}
