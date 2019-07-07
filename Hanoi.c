#include<stdio.h>
#include<math.h>
int count=0;
int  main()
{
    move(3,'A','B','C');
    printf("%d",count);
    return 0;
}
void move(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("第%d次：%c-->%c\n",++count,A,C);
    }
    else
    {
        move(n-1,A,C,B);
        printf("第%d次：%c-->%c\n",++count,A,C);
        move(n-1,B,A,C);
    }
}
