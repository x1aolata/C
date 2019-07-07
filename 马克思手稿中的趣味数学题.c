#include<stdio.h>
int Gcd(int  a,int b)
{

    return b==0?a:Gcd(b,a%b);

}
int main()
{
    printf("Man   Women   Children\n");
    for(int i=0; i<=30; i++)
    {
        for(int j=0; j<=30; j++)
        {
            for(int k=0; k<=30; k++)
            {
                if(i+j+k==30&&3*i+2*j+k==50)
                    printf("%3d%8d%8d\n",i,j,k);
            }
        }
    }
    return 0;
}
