#include<stdio.h>
#include<string.h>

int main()
{
    int n,k;
    int i,j;
    char temp[11];
    char a[101][11];
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%s",&a[i]);
    }



    for(i=0; i<k; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy( temp,a[j]);
                strcpy( a[j],a[j+1]);
                strcpy( a[j+1],temp);

            }
        }
    }


    for(i=0; i<n; i++)
    {
        printf("%s\n",a[i]);
    }

    return 0;
}
