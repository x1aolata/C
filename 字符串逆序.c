#include<stdio.h>
#include<string.h>

main()
{
   char a[90];
   char b[80];
int i,j,k,len;

gets(a);
len=strlen(a);
a[len-1]='\0';
for(i=0;i<len-2;i++)
{
   for(j=len-2;j>-1;j--)
   {
      strcpy(b[j],a[i]);
   }
}

 for(i=0;i<len-2;i++)
 {
     printf("%c",b[i]);
 }

}
