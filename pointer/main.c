#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double a[]= {98,87,65,43,76};
    double *ptra;
    ptra=a;
    for(i=0; i<5; i++)
    {
        printf("%.2lf\n",*(ptra+i));
        printf("������׵�ַ��%p\t������Ԫ�صĵ�ַ��%p\n",&a,&a[i]);
    }




















    /* int num=1024;
     int * ptr_num=NULL;

    ptr_num=&num;
     printf("ָ��ptr_num�ĵ�ַ%p\n",ptr_num);
    ptr_num=NULL;
     printf("ָ��ptr_num�ĵ�ַ%p\n",ptr_num);

     int num=12;
     int *ptr_num=&num;
     int *ptr_num2=&ptr_num;


     printf("ָ��ptr_num�ĵ�ַ%p\n",ptr_num2);
     printf("%d",*ptr_num2);*/


    return 0;
}
