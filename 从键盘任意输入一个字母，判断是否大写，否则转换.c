#include<stdio.h>
main()
{
   char x;
    printf("ÇëÊäÈë×ÖÄ¸£º\n");
    scanf("%c",&x);
    if(x>=65&&x<=90)

    {
        printf("ÄãÊäÈëµÄ×ÖÄ¸Îª´óÐ´×ÖÄ¸.");
    }
    else if(x>=97&&x<=122)
        {x-=32;
        printf("ÄãÊäÈëµÄÎªÐ¡Ð´×ÖÄ¸,×ª»»³É´óÐ´×ÖÄ¸Îª%c.",x);
    }
    else
        printf("Are you kidding me?");
}
