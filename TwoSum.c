#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* twoSum(int* nums, int numsSize, int target)
{
    static int a[2];

    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1; j<numsSize; j++)
        {

            if (nums[i]+nums[j]==target)
            {
                // printf("nums[%d] + nums[%d] = %d + %d = %d",i,j,nums[i],nums[j],target);
                //printf("[%d, %d]",i,j);
                a[0]=i;
                a[1]=j;

                return a;
            }
        }


    }
    return 0;
}

int main()
{
    system("color 02");
    int nums[] = {2, 7, 11, 15};

    twoSum( nums, 4, 9) ;

}
