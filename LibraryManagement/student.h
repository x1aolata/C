#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct stu
{
    char name[20];         //����
    int sex;               //�Ա�0����Ů��1������
    char stuNo[10];        //ѧ��
} Student;                 //ѧ����Ϣ�ṹ��

int StuOfBook(Student *student,Book *books,int booksum);

int StuRead(Student *student, int stusum);

#endif // STUDENT_H_INCLUDED
