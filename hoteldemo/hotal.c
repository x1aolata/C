#include<stdio.h>
#include"hotal.h"

char hotalnames[4][50]= {"贝罗","香榭","阿斯","斯克里"};

int menu(void)
{
    int choice;
    int i;
    printf("请选择：\n");
    for(i=0; i<4; i++)
    {
        printf("%d.%s\n",i+1,hotalnames[i]);
    }
    printf("请输入您选择：");
    scanf("%d",&choice);







    return choice;

}
