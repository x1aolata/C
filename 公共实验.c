#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

clock_t start,stop;
double duration;
int main()
{
    system("color 02");
    start=clock();

    long long  a;
    printf("%d",sizeof(a));
    stop=clock();
    duration=((double)(stop-start))/CLK_TCK;
}
Position BinarySearch( List Tbl, ElementType K ){
    if(Tbl){
        Position left=1,right=Tbl->Last,mid;
        while(left<=right){
            mid=(left+right)/2;
            if(K==Tbl->Data[mid])
            return mid;
            else if(K<Tbl->Data[mid])
                right=mid-1;
            else if(K>Tbl->Data[mid]) left=mid+1;
        }
        return NotFound;
    }
    return NotFound;
}
