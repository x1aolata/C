#include<stdio.h>
main()
{
   char x;
    printf("��������ĸ��\n");
    scanf("%c",&x);
    if(x>=65&&x<=90)

    {
        printf("���������ĸΪ��д��ĸ.");
    }
    else if(x>=97&&x<=122)
        {x-=32;
        printf("�������ΪСд��ĸ,ת���ɴ�д��ĸΪ%c.",x);
    }
    else
        printf("Are you kidding me?");
}
