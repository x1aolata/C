#include <stdio.h>
#include <string.h>

int Fun(int M, int T, int U, int F, int D, char str[]);
int main()
{
    int M,T,U,F,D;
    char str[99];
    printf("Input M,T,U,F,D:");
    scanf("%d%d%d%d%d",&M,&T,&U,&F,&D);
    //  printf("%d    %d     %d     %d      %d\n",M,T,U,F,D);

    printf("Input conditions of road:");

    for(int i=0; i<T; i++)
    {
        scanf("%c",&str[i]);
    }
    /*  for(int i=0; i<T; i++)
     {
         printf("%c",str[i]);
     }
    */

    printf("num=%ld\n",Fun(M,T,U,F,D,str));


system("pause");


    return 0;
}
int Fun(int M, int T, int U, int F, int D, char str[])
{

    /*���ó���M��
    ����ɽ·���ֳ�T��������ͬ��·��
    ����·�ĺ�ʱ��U��
    ƽ�صĺ�ʱ��F��
    ����·�ĺ�ʱ��D��
    Input M,T,U,F,D:
         13 5 3 2 1
    Input conditions of road:ufudf*/
    int count=0;
    int time=0;
    int i;
    for(i=0; i<T; i++)
    {
        if(str[i]=='u'||str[i]=='d')
        {
            time+=U+D;
        }
        if(str[i]=='f')
        {
            time+=2*F;
        }
        if(time<=M)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}
