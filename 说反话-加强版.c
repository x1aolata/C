#include<stdio.h>
#include<string.h>
int main()
{
    char a[5000];
    int b[2000];
    int i,j=1,k,n,m;
    int length_a;

    gets(a);
    printf("%s",a);

    length_a=strlen(a);
    printf("%d",length_a);

    b[0]=0;
    for(i=0; i<length_a-1; i++)
    {
        if(a[i]==' ')
        {
            b[j]=i;
            j++;
        }
    }
    printf("\n");
    b[j]=length_a;
    for(k=0; k<j+1; k++)
    {
        printf("%d\t",b[k]);

    }
     printf("\n88888888888888888888888888\n");
     m=j;

     for(k=m;k>0;k--)
     {
         for(n=b[j-1];n<b[j];n++)
         {

             printf("%c",a[n]);

         }j--;
     }



    /* for(i=0; i<j-1; i++)
     {
         for(k=b[j-1]; k<b[j]; k++)
         {
             printf("%c",a[k]);
             j--;
         }
         printf(" ");
     }







     */




    return 0;
}
