#include<stdio.h>
#include <string.h>
main()
{
    int a,b,c;
    char* x;
    scanf("%d %c %d",&a,&x,&b);


    if(strcmp("x","-") ==0)
    {
        c=a+b;
    }
    else if(strcmp(x,'-') ==0)
    {
        c=a-b;
    }
    else if(strcmp(x,'*') ==0)
    {
        c=a*b;
    }
    else if(strcmp(x,'/') ==0)
    {
        c=a/b;
    }
    else if(strcmp(x,'%') ==0)
    {
        c=a%b;
    }
    printf("%d",c);
}
