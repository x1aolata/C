#include <stdio.h>
#define max 99999
int main()
{
    system("color 02");
    int Thissum = 0;
    int Maxsum = 0;
    int start=0,end;
    int boolean=1;
    int n;
    int num[max];
    scanf("%d",&n);
    end=n-1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);

        Thissum += num[i];
        if (Thissum > Maxsum)
        {
            Maxsum = Thissum;
            if(boolean)
            {
                start=i;
                boolean=0;
            }
            end=i;
        }
        else if (Thissum < 0)
        {
            Thissum = 0;
            boolean=1;
        }
    }
    printf("%d %d\n",start,end);
    printf("%d %d %d",Maxsum,num[start],num[end]);
}








