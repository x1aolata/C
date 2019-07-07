#include <stdio.h>
#include <string.h>
#include "book.h"
#include "student.h"

int StuOfBook(Student *student,Book *books,int booksum)
{
    int  j=0;
    for(int i=0; i<booksum; i++)
    {
        if(books[i].state==1)
        {
            strcpy(student[j].name,books[i].borrowerName);
            strcpy(student[j].stuNo,books[i].stuNo);
            student[j].sex=books[i].sex;
            j++;
        }
    }
    return j;
}

int StuRead(Student *student, int stusum)
{
    for (int i = 0; i < stusum; i++)
    {
        int flag=1;
        for(int j=i+1; j<stusum; j++)
        {
            if(strcmp(student[i].stuNo,student[j].stuNo)==0)
                flag=0;
        }
        if(flag)
        {
            printf("\n--------------------------\n\n");
            printf("姓名:%s\n", student[i].name);
            if (student[i].sex == 0)
                printf("性别:女\n");
            else
                printf("性别:男\n");
            printf("学号:%s\n", student[i].stuNo);
            printf("\n--------------------------\n\n");
        }
    }

    return 0;
}
