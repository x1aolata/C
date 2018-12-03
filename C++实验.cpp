#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
int* findMinOfBigger(int length,int *test)
{
    for(int i=2; i<=length; i++)
    {
        int* part=new int[i];
        assign(i,part,test);//test后i个赋值给part
        if(isConatantlyReduce(i,part))//如果递减
            continue;
        else
        {
            exchange(part[0],
                     MinOfBigger(part[0],i,part));//将第一个与后面中比第一个大的数集中的最小值交换
            sort(i,part);//从小到大排列除第一个以外的数
            assignBack(i,part,test);//将数写回
            return test;

        }
        std::cout<<"no solution."
    }
}

int main()
{
    system("color 21");


}
