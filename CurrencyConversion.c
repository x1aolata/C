#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int f(int q,int n);
int n,s=0;
int main(void)

{
    system("color 02");

    int i,j,k,p=1,flag=1;

    scanf("%d",&n);
    for(i=0; n/p>=10; i++)
    {
        p=pow(10,i);
        s++;
    }
    if(n==0)
        printf("a");
    if(n<10&&n>=0)
        s=1;
    for(j=1; j<=s; j++)
    {
        switch(f(j,n))
        {
        case 0:
            if(j!=s&&j!=s-4)
            {
                if(f(j+1,n)==0)
                    flag=0;
                else
                    flag=1;
                if(flag)
                    printf("a");
                break;
            };
            break;
        case 1:
            printf("b");
            break;
        case 2:
            printf("c");
            break;
        case 3:
            printf("d");
            break;
        case 4:
            printf("e");
            break;
        case 5:
            printf("f");
            break;
        case 6:
            printf("g");
            break;
        case 7:
            printf("h");
            break;
        case 8:
            printf("i");
            break;
        case 9:
            printf("j");
            break;
        }

        if(f(j,n)==0&&j!=s&&j!=s-4)
            continue;
        else
        {
            if(s==9&&j==5)
            {
                if(f(2,n)==0&&f(3,n)==0&&f(4,n)==0&&f(5,n)==0)
                    continue;
            }
            switch(s-j)
            {
            case 1:
                printf("S");
                break;
            case 2:
                printf("B");
                break;
            case 3:
                printf("Q");
                break;
            case 4:
                printf("W");
                break;
            case 5:
                printf("S");
                break;
            case 6:
                printf("B");
                break;
            case 7:
                printf("Q");
                break;
            case 8:
                printf("Y");
                break;
            }
        }
    }

    return 0;

}

int f(int q,int n)
{
    int k,a;
    if(q==1)
        k=n/pow(10,s-1);
    else
    {
        a=n/pow(10,s-q+1);
        k=n/pow(10,s-q)-a*10;
    }
    return k;
}



