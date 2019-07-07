#include <stdio.h>
#include <string.h>
#include "book.h"




int BookInput(Book *books, int *booksum)
{
    // char loginNo[10];      //ͼ����
    // char name[20];         //����
    // char author[20];       //������
    // char publisher[10];    //���浥λ
    // float price;           //�۸�
    // int state;             //����״̬��0������Գ��裬1�����Ѿ����
    // char borrowerName[10]; //����������
    // int sex;               //�������Ա�0����Ů��1������
    // char stuNo[10];        //������ѧ��
    printf("\n\n--------¼��ͼ��--------\n\n");
    printf("\n*������ͼ���ţ�");
    scanf("%s",books[*booksum].loginNo);
    printf("\n*������ͼ��������");
    scanf("%s",books[*booksum].name);
    printf("\n*������ͼ����������");
    scanf("%s",books[*booksum].author);
    printf("\n*������ͼ����浥λ��");
    scanf("%s",books[*booksum].publisher);
    printf("\n*������ͼ��۸�");
    scanf("%f",&books[*booksum].price);
    // scanf("%s %s %s %s %f",&books[*booksum].loginNo , &books[*booksum].name, &books[*booksum].author, &books[*booksum].publisher, &books[*booksum].price);
    books[*booksum].state = 0;
    strcpy(books[*booksum].borrowerName, "");
    books[*booksum].sex = 1;
    strcpy(books[*booksum].stuNo, "");
    *booksum += 1;
    printf("\n--------¼��ɹ�--------\n");
    return 0;
}

// ��2��ͼ����Ϣ���ģ��
// ������ʾͼ����Ϣ��ÿ��10����¼�����������ʾ��һ�������ļ�Ȼ����ʾ���ɡ�
int BookRead(Book *books, int booksum)
{

    for (int i = 0; i < booksum; i++)
    {
        if(i%5==0)
        {
            if(i!=0)
            {
                printf("\n\n-------���������ҳ-------");
                getch();
                system("cls");
            }
            printf("---------ͼ����Ϣ---------\n");
        }
        printf("\n--------------------------\n");
        printf("ͼ����:%s\n", books[i].loginNo);
        printf("����:��%s��\n", books[i].name);
        printf("������:%s\n", books[i].author);
        printf("���浥λ:%s\n", books[i].publisher);
        printf("�۸�:%.2f Ԫ\n", books[i].price);
        if (books[i].state == 0)
            printf("״̬:���Խ���");
        else
            printf("״̬:�Ѿ����");
        printf("\n--------------------------\n");
    }

    return 0;
}

// ��3��ͼ����Ϣ��ѯģ��
// ͨ���˵�ѡ���ѯ��ʽ���ṩ��������ѯ�Ͱ���������ѯ���ֲ�ѯ��ʽ�����û��������㷨���ɡ�
int BookLookupOfname(Book *books, char *name, int booksum)
{
    for (int i = 0; i < booksum; i++)
    {
        int blog = -1;
        if (strcmp(books[i].name, name) == 0)
        {
            blog = i;
            return blog;
        }
    }

    return -1;
}
int BookLookupOfauthor(Book *books, char *author, int booksum)
{

    for (int i = 0; i < booksum; i++)
    {
        int blog = -1;
        if (strcmp(books[i].author, author) == 0)
        {
            blog = i;
            return blog;
        }
    }
    return -1;
}

// ��4��ͼ����Ϣɾ�����޸�ģ��
// ͨ���˵�ѡ��ɾ������������C����û���ṩֱ��ɾ���ļ���¼�ĺ����������Ҫ�Լ�ʵ�֣�����¼���ж��Ƿ�Ҫɾ�����������Ҫɾ���ļ�¼�Ƚϣ������Ҫɾ��������������������д���ļ����޸Ĳ�����ɾ���������ƣ�ֻ���ж��Ƿ���Ҫ�޸ĵļ�¼������ǣ�����޸ĺ�ļ�¼д���ļ�������ֱ��д���ļ���
int BookRevise(Book *books,int index)
{
    char choice;
    printf("\n---------------------------------------------------------\n");

    printf("\nͼ����:%s\t", books[index].loginNo);
    printf("\t\t�Ƿ�ѡ���޸ģ�(y/n)\t");
    getchar();
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("������ͼ����:");
        scanf("%s",books[index].loginNo);
    }
    getchar();
    printf("\n����:��%s��\t", books[index].name);
    printf("\t�Ƿ�ѡ���޸ģ�(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("������ͼ������:");
        scanf("%s",books[index].name);
    }
    getchar();
    printf("\n������:%s\t", books[index].author);
    printf("\t�Ƿ�ѡ���޸ģ�(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("������ͼ��������:");
        scanf("%s",books[index].author);
    }
    getchar();
    printf("\n���浥λ:%s\t", books[index].publisher);
    printf("\t�Ƿ�ѡ���޸ģ�(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("������ͼ����浥λ:");
        scanf("%s",books[index].publisher);
    }
    getchar();
    printf("\n�۸�:%.2f Ԫ\t", books[index].price);
    printf("\t\t�Ƿ�ѡ���޸ģ�(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("������ͼ��۸�:");
        scanf("%f",&books[index].price);
    }
    getchar();
    printf("\n---------------------------------------------------------\n");
    return 0;
}

// ��5��������Ϣģ��
// �����������ʱ����Ҫ���ļ��в���Ҫ�����Ĵ���״̬�������Գ��裬�����������ѽ������������Ա��ѧ����ӵ�����ļ�¼�У����Ѵ���״̬��Ϊ�Ѿ������������ʾ����Ǹ�������ѽ����������������ʱ�����ļ��в��Ҹ���ļ�¼��Ȼ��Ѵ���״̬��Ϊ������裬�ѽ������������Ա��ѧ��ɾ���������޸Ĳ������Բο�ɾ��������
int BookBorrow(Book *books, int index)
{
    if(!books[index].state)
    {
        books[index].state=1;
        printf("\n\n*���Խ���\n");
        printf("\n\n*�������������:");
        scanf("%s",books[index].borrowerName);
        printf("\n*����������Ա�(0)Ů  (1)��:");
        scanf("%d",&books[index].sex);
        printf("\n*���������ѧ��:");
        scanf("%s",books[index].stuNo);
        printf("\n\n----���ĳɹ�----\n");

    }
    else
    {
        printf("\n\n*��Ǹ�������Ѿ������˽����ˡ�\n");
    }

    return 0;
}


int BookReturn(Book *books, int index,char *stuNo)
{
    if(strcmp(books[index].stuNo,stuNo)==0)
    {
        books[index].state=0;
        strcpy(books[index].borrowerName, "");
        books[index].sex = 1;
        strcpy(books[index].stuNo, "");
        printf("\n\n----����ɹ���----");
    }
    else
    {
        printf("\n\n*��û�н����Ȿͼ��Ӵ��");
    }

}

int BookReadindex(Book *books, int index)
{
    printf("\n--------------------------\n");
    printf("ͼ����:%s\n", books[index].loginNo);
    printf("����:��%s��\n", books[index].name);
    printf("������:%s\n", books[index].author);
    printf("���浥λ:%s\n", books[index].publisher);
    printf("�۸�:%.2f Ԫ\n", books[index].price);
    if (books[index].state == 0)
        printf("״̬:���Խ���");
    else
        printf("״̬:�Ѿ����");
    printf("\n--------------------------\n");
    return 1;
}

int BookReadindexOfadmin(Book *books, int index)
{
    // char loginNo[10];      //ͼ����
    // char name[20];         //����
    // char author[20];       //������
    // char publisher[10];    //���浥λ
    // float price;           //�۸�
    // int state;             //����״̬��0������Գ��裬1�����Ѿ����
    // char borrowerName[10]; //����������
    // int sex;               //�������Ա�0����Ů��1������
    // char stuNo[10];        //������ѧ��
    printf("\n--------------------------\n");
    printf("ͼ����:%s\n", books[index].loginNo);
    printf("����:��%s��\n", books[index].name);
    printf("������:%s\n", books[index].author);
    printf("���浥λ:%s\n", books[index].publisher);
    printf("�۸�:%.2f Ԫ\n", books[index].price);
    if (books[index].state == 0)
        printf("״̬:���Խ���");
    else
        printf("״̬:�Ѿ����");
    printf("\n\n��������Ϣ��\n����:%s\n", books[index].borrowerName);
    if(books[index].sex == 0)
    {
        printf("�Ա�:Ů\n");
    }
    else
    {
        printf("�Ա�:��\n");
    }
    printf("ѧ��:%s\n", books[index].stuNo);
    printf("\n--------------------------\n");
    return 1;
}

int BookfindOfstuno(Book *books, char *stuNo, int booksum)
{
    int blog = 0;
    for (int i = 0; i < booksum; i++)
    {

        if (strcmp(books[i].stuNo, stuNo) == 0)
        {
            BookReadindex(books,i);
            blog++;
        }
    }
    return blog;
}

int BookDelete(Book *books, int index,int *booksum)
{
    for(int i=index; i<*booksum-1; i++)
    {
        books[i]=books[i+1];
    }
    *booksum-=1;
    printf("\n\n----ɾ���ɹ�----\n");
}
