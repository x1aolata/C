#include <stdio.h>

int main()
{
    system("color 02");
    int start=0,end=0;
    int n;
    int Thissum = 0;
    int Maxsum = 0;
    int num[99999];
    scanf("%d",&n);
    end=n-1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for(int j=i; j<n; j++)
        {Thissum=0;
            for(int k=i; k<=j; k++)
            {
                Thissum+=num[k];
            }
            if(Thissum>Maxsum )
            {
                Maxsum=Thissum;
                start=i;
                end=j;
            }
        }
    }
    printf("%d %d %d",Maxsum,num[start],num[end]);
}






