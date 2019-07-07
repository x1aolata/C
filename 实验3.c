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

    for(int i=1; i<=m; i++)
    {
        for(int p=1; p<=m; p++)
        {
            for(int j=1; j<=m; j++)
            {
                for(int q=1; q<=m; q++)
                {



                }


            }

        }
    }








    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m; j++)
        {
            printf("%d ",guanxi[i][j]);
        }
        printf("\n");
    }



    return 0;
}



