#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define max 9999

void main()
{
    int len;
    char s1[max];
    char s2[max];
    int nums[200]= {0};

    fgets(s1,sizeof(s1),stdin);
    len=strlen(s1);
    s1[len-1]='\0';
    fgets(s2,sizeof(s2),stdin);
    len=strlen(s2);
    s2[len-1]='\0';
    strcat(s1,s2);
    for(int i=0; i<strlen(s1); i++)
    {
        if(nums[s1[i]]==0)
        {
            printf("%c",s1[i]);
            nums[s1[i]]=1;
        }

    }




}


