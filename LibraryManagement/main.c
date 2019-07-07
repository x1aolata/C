#include <stdio.h>
#include <stdlib.h>
#include "book.h"
#include "fileop.h"
#include "menu.h"
#include "student.h"

int main()
{
    Book books[99];
    Student student[99];
    int booksum = 0;
    int stusum=0;
    int quit=0;
    char tempstuNo[10];
    char tempname[20];

    ReadfromFile(books,&booksum);

    Hello();

    switch(Menulogin())
    {
    case 1:
        while(1)
        {
            system("cls");
            switch(Menustudent())
            {
            case 0:
                quit=1;
                break;
            case 1:
                system("cls");
                printf("\n\n--------我的借阅情况--------\n\n");
                printf("*请输入你的学号：");
                scanf("%s",tempstuNo);
                if(!BookfindOfstuno(books,tempstuNo,booksum))
                {
                    printf("\n\n*你还没有借书哟!\n\n");
                }
                getch();
                break;
            case 2:
                system("cls");
                BookRead(books,booksum);
                getch();
                break;
            case 3:
                system("cls");
                switch(Menufind())
                {
                case 1:
                    printf("\n*请输入你要查询的图书名称：");
                    scanf("%s",tempname);
                    if(BookLookupOfname(books,tempname,booksum)==-1)
                    {
                        printf("\n\n抱歉，此书不存在。");
                    }
                    else
                    {
                        BookReadindex(books, BookLookupOfname(books,tempname,booksum));
                    }
                    getch();
                    break;
                case 2:
                    printf("\n*请输入你要查询的图书作者：");
                    scanf("%s",tempname);
                    if(BookLookupOfauthor(books,tempname,booksum)==-1)
                    {
                        printf("\n\n抱歉，此书不存在。");
                    }
                    else
                    {
                        BookReadindex(books, BookLookupOfauthor(books,tempname,booksum));
                    }
                    getch();
                    break;
                }
                break;
            case 4:
                system("cls");
                printf("\n\n--------借阅图书--------\n\n");
                printf("*请输入你要借阅的图书名称：");
                scanf("%s",tempname);
                if(BookLookupOfname(books,tempname,booksum)==-1)
                {
                    printf("\n\n抱歉，此书不存在。");
                }
                else
                {
                    BookBorrow(books,BookLookupOfname(books,tempname,booksum));
                }
                getch();
                break;
            case 5:
                system("cls");
                printf("\n\n--------归还图书--------\n\n");
                printf("\n*请输入你的学号：");
                scanf("%s",tempstuNo);
                printf("\n*请输入你要归还的图书名称:");
                scanf("%s",tempname);
                BookReturn(books,BookLookupOfname(books,tempname,booksum),tempstuNo);
                getch();
                break;
            }
            if(quit)
            {
                break;
            }
        }
        break;
    case 2:
        while(1)
        {
            system("cls");
            switch(Menuadmin())
            {
            case 0:
                quit=1;
                break;
            case 1:
                system("cls");

                printf("\n\n--------已被借阅的图书有--------\n\n");
                for(int i=0; i<booksum; i++)
                {
                    if(books[i].state==1)
                    {
                        BookReadindexOfadmin(books,i);
                        printf("\n\n");
                    }
                }
                break;
            case 2:
                system("cls");
                printf("\n\n--------已存在的学生信息--------\n\n");
                stusum =StuOfBook(student,books,booksum);
                StuRead(student,stusum);
                break;
            case 3:
                system("cls");
                switch(Menufind())
                {
                case 1:
                    printf("\n*请输入你要查询的图书名称：");
                    scanf("%s",tempname);
                    if(BookLookupOfname(books,tempname,booksum)==-1)
                    {
                        printf("\n\n抱歉，此书不存在。");
                    }
                    else
                    {
                        BookReadindex(books, BookLookupOfname(books,tempname,booksum));
                    }
                    getch();
                    break;
                case 2:
                    printf("\n*请输入你要查询的图书作者：");
                    scanf("%s",tempname);
                    if(BookLookupOfauthor(books,tempname,booksum)==-1)
                    {
                        printf("\n\n抱歉，此书不存在。");
                    }
                    else
                    {
                        BookReadindex(books, BookLookupOfauthor(books,tempname,booksum));
                    }
                    getch();
                    break;

                }
                break;
            case 4:
                system("cls");
                BookRead(books,booksum);
                break;
            case 5:
                system("cls");
                BookInput(books,&booksum);
                break;
            case 6:
                system("cls");
                printf("\n\n-----------------------修改图书信息-----------------------\n\n");
                printf("*请输入要修改图书的书名：");
                scanf("%s",tempname);
                if(BookLookupOfname(books,tempname,booksum)==-1)
                {
                    printf("\n\n抱歉，此书不存在。");
                }
                else
                {
                    BookRevise(books, BookLookupOfname(books,tempname,booksum));
                }
                break;
            case 7:
                system("cls");
                printf("\n\n--------删除图书--------\n\n");
                printf("\n*请输入要删除图书的书名：");
                scanf("%s",tempname);
                if(BookLookupOfname(books,tempname,booksum)==-1)
                {
                    printf("\n\n抱歉，此书不存在。");
                }
                else
                {
                    BookDelete(books, BookLookupOfname(books,tempname,booksum),&booksum);
                }
                break;
            }
            if(quit)
            {
                break;
            }
            getch();
        }
        break;
    }

    WritetoFile(books,booksum);

    return 0;
}
