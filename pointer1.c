#include <stdio.h>
//指针常量，过渡到指针的变量
int main()
{
    char   a=1;
    short  b=2;
    int    c=3;
    double d=4;

    printf("&a=%p\n",&a);
    printf("&b=%p\n",&b);
    printf("&c=%p\n",&c);
    printf("&d=%p\n",&d);
    //将此处改为上述地址
    printf("a=%d\n",  *((char  *)0x0060FEFF));
    printf("b=%d\n",  *((short *)0x0060FEAC));
    printf("c=%d\n",  *((int   *)0x0060FEA8));
    printf("d=%.2f\n",*((double*)0x0060FEA0));

    printf("sizeof(char   *)=%d\n",sizeof(char  *));
    printf("sizeof(short  *)=%d\n",sizeof(short *));
    printf("sizeof(int    *)=%d\n",sizeof(int   *));
    printf("sizeof(double *)=%d\n",sizeof(double*));


    char   *pc=&a;
    short  *ps=&b;
    int    *pi=&c;
    double *pd=&d;

    printf("sizeof(pc)=%d\n",sizeof(pc));
    printf("sizeof(ps)=%d\n",sizeof(ps));
    printf("sizeof(pi)=%d\n",sizeof(pi));
    printf("sizeof(pd)=%d\n",sizeof(pd));

    printf("a=%d\n",  *(pc));
    printf("b=%d\n",  *(ps));
    printf("c=%d\n",  *(pi));
    printf("d=%.2f\n",*(pd));

    return 0;
}
