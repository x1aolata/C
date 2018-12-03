#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //IPµØÖ·×ª»»
    char a[40];
    int b[4] = {0,0,0,0};
    int i,  k=7,temp,temp2;
    int j=0;
    fgets(a, sizeof(a), stdin);
    for (i = 0; i < 32; i++)
{
        if(a[i]=='1')

        {
            temp =1;
        }
        else
        {
            temp=0;
        }
        temp2 = (int)pow(2, k);
        printf("%d,%d\n",temp,temp2);
        b[j] += temp2 * temp;

        if(k==0)
        {
            k = 8;
            j++;
        }
        k--;



    }


    printf("%d.%d.%d.%d", b[0], b[1], b[2], b[3]);




    return 0;
}
