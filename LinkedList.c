
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int ElementType;        //    ������������,�ɸ�����Ҫ�����������Ͷ���
//    ����ڵ�Ķ���
typedef struct ListNode
{
    ElementType  Element;        //    �����򣬴������
    ListNode* Next;        //    ָ����һ������ڵ�
} Node, *PNode;

//    ��������������
PNode CreateList(void)
{
    int len ;    //    ���ڶ���������
    int val ;    //    ���ڴ�Žڵ���ֵ
    PNode PHead = (PNode)malloc(sizeof(Node));    //    ��������һ��ͷ�ڵ��ڴ�ռ�
//ͷ�ڵ��൱��������ڱ�����������ݣ�ָ���׽ڵ㣨��һ���ڵ㣩
    if (PHead == NULL)    //    �ж��Ƿ����ɹ�
    {
        printf("�ռ����ʧ�� \n");
        exit(-1);
    }

    PNode PTail = PHead;    //    �����ĩβ�ڵ㣬��ʼָ��ͷ�ڵ�
    PTail->Next = NULL;    //    ���һ���ڵ�ָ����Ϊ��
    printf("������ڵ������");
    scanf_s("%d", &len);        //    ����ڵ����
    for (int i = 0; i < len; i++)
    {

        PNode pNew = (PNode)malloc(sizeof(Node));    //    ����һ���½ڵ�
        if (pNew == NULL)
        {
            printf("�����½ڵ�ʧ��\n");
            exit(-1);
        }
        printf("������� %d ���ڵ�����ݣ�", i + 1);
        scanf_s("%d", &val);    //    ��������ڵ������

        pNew->Element = val;    //    �����ݸ�ֵ���ڵ�������
        PTail->Next = pNew;    //    ĩβ�ڵ�ָ��ָ����һ���½ڵ�
        pNew->Next = NULL;        //    �½ڵ�ָ��ָ��Ϊ��
        PTail = pNew;    //    ���½ڵ㸴�Ƹ�ĩβ�ڵ�
    }
    printf("��������ɹ�\n");
    return PHead;    //    ����ͷ�ڵ�
}

//    ������
int main()
{
    PNode List = CreateList();    //����һ��ָ�룬ʹ��ָ���´����������ͷָ��
    return 0;
}
