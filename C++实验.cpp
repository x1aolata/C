#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
int* findMinOfBigger(int length,int *test)
{
    for(int i=2; i<=length; i++)
    {
        int* part=new int[i];
        assign(i,part,test);//test��i����ֵ��part
        if(isConatantlyReduce(i,part))//����ݼ�
            continue;
        else
        {
            exchange(part[0],
                     MinOfBigger(part[0],i,part));//����һ��������бȵ�һ����������е���Сֵ����
            sort(i,part);//��С�������г���һ���������
            assignBack(i,part,test);//����д��
            return test;

        }
        std::cout<<"no solution."
    }
}

int main()
{
    system("color 21");


}
