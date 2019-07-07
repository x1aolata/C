#include <stdio.h>
#include <math.h>
void Swap(int *x, int *y);
void Transpose(int (*a)[3], int n);
void InputMatrix(int (*a)[3], int n);
void PrintMatrix(int (*a)[3], int n);
/*
�����º���ԭ�ͱ�̼��㲢���n��n�׾����ת�þ������У�n���û��Ӽ������롣��֪nֵ������10��

������ʾ��Ϣ��"Input n:"
�����ʽ��"%d"
������ʾ��Ϣ��"Input %d*%d matrix:\n"
�����ʾ��Ϣ��"The transposed matrix is:\n"
�����ʽ��"%d\t"
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
