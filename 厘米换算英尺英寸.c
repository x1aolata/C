#include<stdio.h>
main()
{
  int f,i,cm;
  scanf("%d",&cm);
  f=cm/30.48;
  i=(cm-30.48*f)/30.48*12;
  printf("%d %d\n",f,i);
}
