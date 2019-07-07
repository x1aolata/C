#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

typedef struct stu
{
    char name[20];         //姓名
    int sex;               //性别，0代表女，1代表男
    char stuNo[10];        //学号
} Student;                 //学生信息结构体

int StuOfBook(Student *student,Book *books,int booksum);

int StuRead(Student *student, int stusum);

#endif // STUDENT_H_INCLUDED
