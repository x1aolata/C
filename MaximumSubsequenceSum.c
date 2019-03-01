#include <stdio.h>

int main()
{
    system("color 02");
    int Thissum = 0;
    int Maxsum = 0;
    int n;
    scanf("%d",&n);
    int num[99999];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        Thissum += num[i];
        if (Thissum > Maxsum)
        {
            Maxsum = Thissum;
        }
        else if (Thissum < 0)
        {
            Thissum = 0;
        }
    }
    printf("%d",Maxsum);
}
