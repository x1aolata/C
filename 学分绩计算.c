#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <stdio.h>
int main()
{
    int  math1,English,math2;
    printf("Input math1, English and math2:");
    scanf("%d,%d,%d",&math1,&English,&math2);
    printf("Final score = %.2f\n",(math1*5+English*1.5+math2*3.5)/10);
    return 0;

}
