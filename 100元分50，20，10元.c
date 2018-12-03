#include<stdio.h>
main()
{
    int money = 72300;
    int i, j, t, a = 0;
    for (i = 0; i <= money/50; ++i)
    {
        for (j = 0; j <= (money-i*50)/20; ++j)
        {
            t = money-i*50-j*20;
            if (t >= 0)
            {
                printf ("50:%d张 20:%d张 10:%d张\n", i, j, t/10);
                a ++;
            }
        }
    }
    printf ("共%d种方案\n", a);
}
