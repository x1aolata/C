#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
*/
int main()
{
    system("color 1E");
    char a[30];
    int len;
    int i;
    fgets(a,sizeof(a),stdin);
    len=strlen(a);

    for(i=0; i<len-1; i++)
    {

        if(a[i]=='-')
            printf("fu");
        if(a[i]=='0')
            printf("ling");
        if(a[i]=='1')
            printf("yi");
        if(a[i]=='2')
            printf("er");
        if(a[i]=='3')
            printf("san");
        if(a[i]=='4')
            printf("si");
        if(a[i]=='5')
            printf("wu");
        if(a[i]=='6')
            printf("liu");
        if(a[i]=='7')
            printf("qi");
        if(a[i]=='8')
            printf("ba");
        if(a[i]=='9')
            printf("jiu");
        if(i<len-2)
            printf(" ");
    }


    return 0;
}
