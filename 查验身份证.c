#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    system("color 02");
    int quan[]= { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
    char duibi[]= { '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2' };
    int n;
    char id[99][20];
    char idt[99][20];
    scanf("%d",&n);
    int k=0;
    for(int i=0; i<n; i++)
    {
        scanf("%s",&id[i]);
    }
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<18; j++)
        {
            if (j < 17)
            {
                sum += id[i][j] * quan[i];
            }
            else
            {
                if (duibi[sum % 11]!=id[i][17])
                {
                    // puts(id[i]);
                    strcpy(idt[k],id[i]);
                    k++;
                }
            }
        }
    }

    if(k==0)
    {
        printf("All passed");
    }
    else
    {
        for(int i=0; i<k; i++)
        {
            // puts(idt[i]);
            printf("%s\n",idt[i]);
        }
    }
    return 0;
}
