#include <string.h>
#include <stdio.h>
main()
{
    char a[1000]= {0};
    int i;
    printf("���������룺\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%s",a);
        if(strcmp(a,"abcd") == 0)
        {
            break;
        }
        else if(i<2)
        {
            printf("������������ԣ�\n");
        }
    }
    if(i == 3)
        printf("������󣬼������������\n");
    else
        printf("������ȷ��\n");

}
