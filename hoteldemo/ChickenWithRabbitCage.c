#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    system("color 1E");

int chicken,rabbit;
for(chicken=0;chicken<98;chicken++)
{
   rabbit=98- chicken;
   if(chicken*2+rabbit*4==386)
   {
       printf("chicken:%-12drabbit:%-12d",chicken,rabbit);
   }
}

    return 0;
}
