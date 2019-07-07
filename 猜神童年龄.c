#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{

// srand((unsigned)time(NULL));
    for(int i=0; i<90; i++)
        printf("age=%d\n",rand()%2);
    return 0;
}
