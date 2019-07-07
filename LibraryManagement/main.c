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
                printf("\n\n--------�ҵĽ������--------\n\n");
                printf("*���������ѧ�ţ�");
                scanf("%s",tempstuNo);
                if(!BookfindOfstuno(books,tempstuNo,booksum))
                {
                    printf("\n\n*�㻹û�н���Ӵ!\n\n");
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
                    printf("\n*��������Ҫ��ѯ��ͼ�����ƣ�");
                    scanf("%s",tempname);
                    if(BookLookupOfname(books,tempname,booksum)==-1)
                    {
                        printf("\n\n��Ǹ�����鲻���ڡ�");
                    }
                    else
                    {
                        BookReadindex(books, BookLookupOfname(books,tempname,booksum));
                    }
                    getch();
                    break;
                case 2:
                    printf("\n*��������Ҫ��ѯ��ͼ�����ߣ�");
                    scanf("%s",tempname);
                    if(BookLookupOfauthor(books,tempname,booksum)==-1)
                    {
                        printf("\n\n��Ǹ�����鲻���ڡ�");
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
                printf("\n\n--------����ͼ��--------\n\n");
                printf("*��������Ҫ���ĵ�ͼ�����ƣ�");
                scanf("%s",tempname);
                if(BookLookupOfname(books,tempname,booksum)==-1)
                {
                    printf("\n\n��Ǹ�����鲻���ڡ�");
                }
                else
                {
                    BookBorrow(books,BookLookupOfname(books,tempname,booksum));
                }
                getch();
                break;
            case 5:
                system("cls");
                printf("\n\n--------�黹ͼ��--------\n\n");
                printf("\n*���������ѧ�ţ�");
                scanf("%s",tempstuNo);
                printf("\n*��������Ҫ�黹��ͼ������:");
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

                printf("\n\n--------�ѱ����ĵ�ͼ����--------\n\n");
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
                printf("\n\n--------�Ѵ��ڵ�ѧ����Ϣ--------\n\n");
                stusum =StuOfBook(student,books,booksum);
                StuRead(student,stusum);
                break;
            case 3:
                system("cls");
                switch(Menufind())
                {
                case 1:
                    printf("\n*��������Ҫ��ѯ��ͼ�����ƣ�");
                    scanf("%s",tempname);
                    if(BookLookupOfname(books,tempname,booksum)==-1)
                    {
                        printf("\n\n��Ǹ�����鲻���ڡ�");
                    }
                    else
                    {
                        BookReadindex(books, BookLookupOfname(books,tempname,booksum));
                    }
                    getch();
                    break;
                case 2:
                    printf("\n*��������Ҫ��ѯ��ͼ�����ߣ�");
                    scanf("%s",tempname);
                    if(BookLookupOfauthor(books,tempname,booksum)==-1)
                    {
                        printf("\n\n��Ǹ�����鲻���ڡ�");
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
                printf("\n\n-----------------------�޸�ͼ����Ϣ-----------------------\n\n");
                printf("*������Ҫ�޸�ͼ���������");
                scanf("%s",tempname);
                if(BookLookupOfname(books,tempname,booksum)==-1)
                {
                    printf("\n\n��Ǹ�����鲻���ڡ�");
                }
                else
                {
                    BookRevise(books, BookLookupOfname(books,tempname,booksum));
                }
                break;
            case 7:
                system("cls");
                printf("\n\n--------ɾ��ͼ��--------\n\n");
                printf("\n*������Ҫɾ��ͼ���������");
                scanf("%s",tempname);
                if(BookLookupOfname(books,tempname,booksum)==-1)
                {
                    printf("\n\n��Ǹ�����鲻���ڡ�");
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
