#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    system("color 1E");
    int man,woman,children;
    for(man=1;man<29;man++)
    {
        for(woman=1;woman<29-man;woman++)
        {
           children=30-man-woman;
           if(man*3+woman*2+children*1==50)
           {
               printf("man:%-12d\twoman:%-12d\tchildren:%-12d\t\n",man,woman,children);
           }
        }

    }




    return 0;
}
