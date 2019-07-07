#include <stdio.h>
#include <string.h>
int main()
{
    int n,m,k;
    int guanxi[9][9]= {0};
    int buhao[9][9]= {0};
    int temp;
    int a,b;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d",&a,&b);
        //printf("%d %d\n",a,b);
        scanf("%d",&temp);
        if(temp==1)
            guanxi[b][a]=guanxi[a][b]=temp;
        else
            buhao[b][a]=buhao[a][b]=temp;
    }
//²âÊÔ
 /*   for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%2d ",guanxi[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%2d ",buhao[i][j]);
        }
        printf("\n");
    }

*/

    for(int i=0; i<k; i++)
    {
        scanf("%d %d",&a,&b);
        if(guanxi[a][b]==1&&buhao[a][b]==0)
        {
            printf("No problem\n");
        }
         if(guanxi[a][b]==0&&buhao[a][b]==0)
        {
            printf("OK\n");
        }
         if(guanxi[a][b]==0&&buhao[a][b]==-1)
        {
            printf("OK but...\n");
        }
         if(guanxi[a][b]==0&&buhao[a][b]==-1)
        {
            printf("No way\n");
        }

    }
    return 0;
}


