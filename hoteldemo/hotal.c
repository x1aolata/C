#include<stdio.h>
#include"hotal.h"

char hotalnames[4][50]= {"����","���","��˹","˹����"};

int menu(void)
{
    int choice;
    int i;
    printf("��ѡ��\n");
    for(i=0; i<4; i++)
    {
        printf("%d.%s\n",i+1,hotalnames[i]);
    }
    printf("��������ѡ��");
    scanf("%d",&choice);







    return choice;

}
