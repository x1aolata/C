#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
    system("color 02");
    char num[1050];
    int a[10]= {0,0,0,0,0,0,0,0,0,0};
    int i,j,k;
    fgets(num,sizeof(num),stdin);
    for(i=0; num[i]!='\n'; i++)
    {
        switch(num[i])
        {
        case '0':
            a[0]+=1;
            break;
        case '1':
            a[1]+=1;
            break;
        case '2':
            a[2]+=1;
            break;
        case '3':
            a[3]+=1;
            break;
        case '4':
            a[4]+=1;
            break;
        case '5':
            a[5]+=1;
            break;
        case '6':
            a[6]+=1;
            break;
        case '7':
            a[7]+=1;
            break;
        case '8':
            a[8]+=1;
            break;
        case '9':
            a[9]+=1;
            break;
        }

    }




    for(i=0; i<10; i++)
    {
        if(a[i]!=0)
        {
            printf("%d:%d\n",i,a[i]);
        }

    }


    return 0;
}
