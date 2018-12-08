#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct Birth
{
    int year;
    int month;
    int data;
};



struct People
{
    char name[50];
    char sex[20];
    struct Birth birth;
};

int main()
{
    system("color 02");

    struct People libai= {"Àî°×","ÄÐ",{2001,12,6}};
    struct People wang= {"Íõ","ÄÐ",{2021,11,12}};
    struct People *a=&libai;
    printf("%s\t%d\n",libai.name,libai.birth.year);
    printf("%s\t%d\n",(*a).name,(*a).birth.year);
    printf("%s\t%d\n",a->name,a->birth.year);

    return 0;
}
