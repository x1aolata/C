#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>


int main()
{
    system("color 21");
    int n;
    int i,j;
    char a[1000][80];
    char min[80];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",&a[i]);
    }
    strcpy( min,a[0]);
    for(i=1; i<n; i++)
    {
        if(strcmp(a[i],min)<0)

            strcpy( min,a[i]);

    }


    printf("Min is:%s",min);

    return 0;

}
