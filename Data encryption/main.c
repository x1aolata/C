#include <stdio.h>
#include <stdlib.h>
#define KEY 3//��Կ
char* encrypt(char[]);//���ܴ����ַ���
char* unencrypt(char[]);//����

int main()
{
    char password[50]="wasdwasd";
    encrypt(password);
    puts(password);
    unencrypt(password);
    puts(password);



    return 0;
}
char* encrypt(char password[])
{
    int i=0;
    int len=strlen(password);
    for(i=0; i<len; i++)
    {

        password[i]=password[i]+2*i+KEY;

    }

}
char* unencrypt(char password[])
{
    int i=0;
    int len=strlen(password);
    for(i=0; i<len; i++)
    {

        password[i]=password[i]-2*i-KEY;


    }

}

