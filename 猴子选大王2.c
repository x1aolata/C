#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("color 1E");
    int monkey[1000];
    int N,sum;
    int i,j=0,k;
    scanf("%d",&N);

    for(i=0; i<N; i++)//�����Ӹ�ֵΪһ
    {
        monkey[i]=1;
    }


    for(i=0; i<N; i++)//��������
    {
        if(monkey[i]==1)//ɾ������
        {
            j++;
            if(j%3==0)
            {
                monkey[i]=0;

            }
        }

        sum=0;
        for( k=0; k<N; k++)
        {
            sum+=monkey[k];
        }
        if(sum==1)
        {
            break;
        }
        if(i==N-1)//��������
        {
            i=-1;
        }
    }






    for(i=0; i<N; i++)
    {
        if(monkey[i]==1)
        {
            printf("%d\n",i+1);
        }
    }
    return 0;
}
