#include<stdio.h>

void main()
{
    char a[]="wasd";
    char b[]= "hello wasd";
    char c[] = "I am a boy.";
    int i=0;
    // printf("%d",numJewelsInStones(a, b));
    printf("%d\n",strlen(a));
    printf("%d\n",strlen(b));
    printf("%d\n",strlen(c));
    while(a[i])
    {
        printf("%c",a[i]) ;
        i++;
    }
    printf("\n");
    i=0;
    while(b[i])
    {
        printf("%c",b[i]) ;
        i++;
    }
    i=0;
    printf("\n");
    while(c[i])
    {
        printf("%c",c[i]) ;
        i++;
    }
}







int numJewelsInStones(char* J, char* S)
{
    int i=0,j=0,res = 0;
    while(J[i])
    {
        while(S[j])
        {
            if(J[i] == S[j])
            {
                res++;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return res;








}
