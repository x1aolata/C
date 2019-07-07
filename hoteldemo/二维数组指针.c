#include <stdio.h>
#include <math.h>
void Swap(int *x, int *y);
void Transpose(int (*a)[3], int n);
void InputMatrix(int (*a)[3], int n);
void PrintMatrix(int (*a)[3], int n);
/*
按如下函数原型编程计算并输出n×n阶矩阵的转置矩阵。其中，n由用户从键盘输入。已知n值不超过10。

输入提示信息："Input n:"
输入格式："%d"
输入提示信息："Input %d*%d matrix:\n"
输出提示信息："The transposed matrix is:\n"
输出格式："%d\t"
*/
int main()
{
     int a[99][99];
     int n;
     printf("Input n:");
     scanf("%d",&n);
     printf("Input %d*%d matrix:\n",n,n);
     InputMatrix(a,n);
     Transpose(a,n);
     printf("The transposed matrix is:\n");
     PrintMatrix(a,  n);

    return 0;
}
void  Swap(int *x, int *y)
{
    *x=*x+*y-(*y=*x);
}
void Transpose(int (*a)[3], int n)
{

    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
           //Swap(&a[i][j],&a[j][i]);
           Swap(*(a+i)+j,*(a+j)+i);

        }
    }
}

void InputMatrix(int (*a)[3], int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void PrintMatrix(int (*a)[3], int n)
{

    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}
