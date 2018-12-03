#include <stdio.h>
int main()
{
    int a[10];
    int i, j;
    int temp;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }






    for (i = 0; i < 9; i++)//Ñ¡ÔñÅÅÐò
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }






    for (i = 0; i < 10; i++)//Ã°ÅÝÅÅÐò
    {
        for (j = 0; j < 10-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }




    for (i = 0; i < 10; i++)
        printf("%d", a[i]);
}
