#include<stdio.h>
#include<string.h>//字符串头文件
//strlen(字符串名字)不带回车长度
main()
{
    char a[10];
    int i;
    int blank=0,letter=0,digit=0,other=0;
    for(i=0; i<10; i++)
    {
        scanf("%c",&a[i]);

         getchar();


        if(a[i]==' ')
        {
            blank++;
        }
        else if(a[i]>=65&&a[i]<=90)
        {
            letter++;
        }
        else if(a[i]>=97&&a[i]<=122)
        {
            letter++;
        }
        else if(a[i]>=48&&a[i]<=57)
        {
            digit++;

        }
        else
            other++;
    }
    printf("%d %d %d %d",letter,blank,digit,other);
}
