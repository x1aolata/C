#include <string.h>
#include <stdio.h>
main()
{
    char a[1000]= {0};
    int i;
    printf("请输入密码：\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%s",a);
        if(strcmp(a,"abcd") == 0)
        {
            break;
        }
        else if(i<2)
        {
            printf("密码错误，请重试！\n");
        }
    }
    if(i == 3)
        printf("密码错误，计算机已锁定！\n");
    else
        printf("密码正确！\n");

}
