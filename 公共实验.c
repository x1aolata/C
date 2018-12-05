#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main()
{

    char *name1="hello world";
    char name2[20]="hello";
    printf("%p\n",*name1);
    //fgets(name,sizeof(name),stdin);
    // strcat(name1,name2);
    // printf("%d",strlen(name1));
    name1+=3;
    puts(name1);

    return 0;
}
