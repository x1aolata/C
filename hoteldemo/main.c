#include <stdio.h>
#include <stdlib.h>
#include"hotal.h"
extern char hotalnames[4][50];

int main()
{

    int choice;
    choice=menu();
if(choice>0&&choice<5)

{
    printf("ÄãµÄÑ¡ÔñÎª:%s\n",hotalnames[choice-1]);
}


    return 0;
}
