#include<stdio.h>
#include<math.h>
void sort_select(int arr[],int n);
int decrease(int x);
int increase(int x);
int main()
{
    int num;
    scanf("%d",&num);
    do
    {
        if( num/1000==num/100%10 && num/100%10==num/10%10 && num/10%10==num%10)
        {
            printf("%04d - %04d = %04d\n",num,num,num-num);
            break;
        }
        printf("%04d - %04d = %04d\n",decrease(num),increase(num),decrease(num)-increase(num));
        num=decrease(num)-increase(num);
    }
    while(num!=6174);
    return 0;
}

void sort_select(int arr[],int n)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j]-(arr[j]=arr[i]);
            }
        }
    }
}
int increase(int x)
{
    int nums[4];
    nums[0]=x/1000;//四位数的千位
    nums[1]=x/100%10;//四位数的百位
    nums[2]=x/10%10;//四位数的十位
    nums[3]=x%10;//四位数的个位
    sort_select(nums,4);
    return nums[0]*1000+nums[1]*100+nums[2]*10+nums[3]*1;
}

int decrease(int x)
{
    int nums[4];
    nums[0]=x/1000;//四位数的千位
    nums[1]=x/100%10;//四位数的百位
    nums[2]=x/10%10;//四位数的十位
    nums[3]=x%10;//四位数的个位
    sort_select(nums,4);
    return nums[0]*1+nums[1]*10+nums[2]*100+nums[3]*1000;
}

