#include<stdio.h>
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
main()

{
    int a,b;
    int year;
    int*pyear=NULL;
    a=122;
    b=3;
    swap(&a,&b);
    printf("%d %d\n",a,b);

    year=20162;


    printf("%p",Pyear);


}
