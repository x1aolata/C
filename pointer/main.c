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
        printf("数组的首地址：%p\t数组首元素的地址：%p\n",&a,&a[i]);
    }




















    /* int num=1024;
     int * ptr_num=NULL;

    ptr_num=&num;
     printf("指针ptr_num的地址%p\n",ptr_num);
    ptr_num=NULL;
     printf("指针ptr_num的地址%p\n",ptr_num);

     int num=12;
     int *ptr_num=&num;
     int *ptr_num2=&ptr_num;


     printf("指针ptr_num的地址%p\n",ptr_num2);
     printf("%d",*ptr_num2);*/


    return 0;
}
