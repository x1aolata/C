#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    system("color 02");
    char word;
    int i=0;

    while(scanf("%c",&word))
    {
        if(word!='.'&&word!=' ')
        {
            i++;
        }
        else if(word==' ')
        {
            if(i)
            {
                printf("%d ",i);
                i=0;
            }
        }
        else if(word=='.')
        {
            if(i)
            {
                printf("%d",i);

            }
            break;
        }
    }





    return 0;
}


