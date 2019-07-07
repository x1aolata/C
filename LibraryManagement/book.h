#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED


typedef struct book
{
    char loginNo[10];      //ͼ����
    char name[20];         //����
    char author[20];       //������
    char publisher[20];    //���浥λ
    float price;           //�۸�
    int state;             //����״̬��0������Գ��裬1�����Ѿ����
    char borrowerName[10]; //����������
    int sex;               //�������Ա�0����Ů��1������
    char stuNo[10];        //������ѧ��
} Book;                    //ͼ����Ϣ�ṹ��



// ��1��ͼ����Ϣ����ģ��,��ͼ����Ϣд��ͼ����Ϣ�ļ���
int BookInput(Book *books, int *booksum);

// ��2��ͼ����Ϣ���ģ��,������ʾͼ����Ϣ��ÿ��10����¼�����������ʾ��һ�������ļ�Ȼ����ʾ���ɡ�
int BookRead(Book *books, int booksum);

// ��3��ͼ����Ϣ��ѯģ��,ͨ���˵�ѡ���ѯ��ʽ���ṩ��������ѯ�Ͱ���������ѯ���ֲ�ѯ��ʽ�����û��������㷨���ɡ�

int BookLookupOfname(Book *books, char *name, int booksum);
int BookLookupOfauthor(Book *books, char *author, int booksum);


// ��4��ͼ����Ϣɾ�����޸�ģ��,ͨ���˵�ѡ��ɾ������������C����û���ṩֱ��ɾ���ļ���¼�ĺ����������Ҫ�Լ�ʵ�֣�����¼���ж��Ƿ�Ҫɾ�����������Ҫɾ���ļ�¼�Ƚϣ������Ҫɾ��������������������д���ļ����޸Ĳ�����ɾ���������ƣ�ֻ���ж��Ƿ���Ҫ�޸ĵļ�¼������ǣ�����޸ĺ�ļ�¼д���ļ�������ֱ��д���ļ���
int BookRevise(Book *books,int index);

// ��5��������Ϣģ��,�����������ʱ����Ҫ���ļ��в���Ҫ�����Ĵ���״̬�������Գ��裬�����������ѽ������������Ա��ѧ����ӵ�����ļ�¼�У����Ѵ���״̬��Ϊ�Ѿ������������ʾ����Ǹ�������ѽ����������������ʱ�����ļ��в��Ҹ���ļ�¼��Ȼ��Ѵ���״̬��Ϊ������裬�ѽ������������Ա��ѧ��ɾ���������޸Ĳ������Բο�ɾ��������
int BookBorrow(Book *books, int index);

// �黹ͼ��
int BookReturn(Book *books, int index,char *stuNo);

// ����Ŷ�ȡͼ��
int BookReadindex(Book *books, int index);

// ��ѧ�Ų�ѯͼ��
int BookfindOfstuno(Book *books, char *stuNo, int booksum);

// ����Ŷ�ȡͼ�飨����Ա��
int BookReadindexOfadmin(Book *books, int index);

// ɾ��ģ��
int BookDelete(Book *books, int index,int *booksum);






#endif // BOOK_H_INCLUDED
