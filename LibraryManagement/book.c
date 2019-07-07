#include <stdio.h>
#include <string.h>
#include "book.h"




int BookInput(Book *books, int *booksum)
{
    // char loginNo[10];      //图书编号
    // char name[20];         //书名
    // char author[20];       //作者名
    // char publisher[10];    //出版单位
    // float price;           //价格
    // int state;             //存在状态，0代表可以出借，1代表已经借出
    // char borrowerName[10]; //借书人姓名
    // int sex;               //借书人性别，0代表女，1代表男
    // char stuNo[10];        //借书人学号
    printf("\n\n--------录入图书--------\n\n");
    printf("\n*请输入图书编号：");
    scanf("%s",books[*booksum].loginNo);
    printf("\n*请输入图书书名：");
    scanf("%s",books[*booksum].name);
    printf("\n*请输入图书作者名：");
    scanf("%s",books[*booksum].author);
    printf("\n*请输入图书出版单位：");
    scanf("%s",books[*booksum].publisher);
    printf("\n*请输入图书价格：");
    scanf("%f",&books[*booksum].price);
    // scanf("%s %s %s %s %f",&books[*booksum].loginNo , &books[*booksum].name, &books[*booksum].author, &books[*booksum].publisher, &books[*booksum].price);
    books[*booksum].state = 0;
    strcpy(books[*booksum].borrowerName, "");
    books[*booksum].sex = 1;
    strcpy(books[*booksum].stuNo, "");
    *booksum += 1;
    printf("\n--------录入成功--------\n");
    return 0;
}

// （2）图书信息浏览模块
// 分屏显示图书信息，每屏10条记录，按任意键显示下一屏。读文件然后显示即可。
int BookRead(Book *books, int booksum)
{

    for (int i = 0; i < booksum; i++)
    {
        if(i%5==0)
        {
            if(i!=0)
            {
                printf("\n\n-------按任意键翻页-------");
                getch();
                system("cls");
            }
            printf("---------图书信息---------\n");
        }
        printf("\n--------------------------\n");
        printf("图书编号:%s\n", books[i].loginNo);
        printf("书名:《%s》\n", books[i].name);
        printf("作者名:%s\n", books[i].author);
        printf("出版单位:%s\n", books[i].publisher);
        printf("价格:%.2f 元\n", books[i].price);
        if (books[i].state == 0)
            printf("状态:可以借阅");
        else
            printf("状态:已经借出");
        printf("\n--------------------------\n");
    }

    return 0;
}

// （3）图书信息查询模块
// 通过菜单选择查询方式，提供按书名查询和按作者名查询两种查询方式。采用基本查找算法即可。
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

// （4）图书信息删除与修改模块
// 通过菜单选择删除操作，由于C语言没有提供直接删除文件记录的函数，因而需要自己实现：读记录，判断是否要删除（与输入的要删除的记录比较），如果要删除，则舍弃；否则重新写入文件。修改操作于删除操作类似，只是判断是否是要修改的记录，如果是，则把修改后的记录写入文件，否则直接写入文件。
int BookRevise(Book *books,int index)
{
    char choice;
    printf("\n---------------------------------------------------------\n");

    printf("\n图书编号:%s\t", books[index].loginNo);
    printf("\t\t是否选择修改？(y/n)\t");
    getchar();
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("请输入图书编号:");
        scanf("%s",books[index].loginNo);
    }
    getchar();
    printf("\n书名:《%s》\t", books[index].name);
    printf("\t是否选择修改？(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("请输入图书书名:");
        scanf("%s",books[index].name);
    }
    getchar();
    printf("\n作者名:%s\t", books[index].author);
    printf("\t是否选择修改？(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("请输入图书作者名:");
        scanf("%s",books[index].author);
    }
    getchar();
    printf("\n出版单位:%s\t", books[index].publisher);
    printf("\t是否选择修改？(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("请输入图书出版单位:");
        scanf("%s",books[index].publisher);
    }
    getchar();
    printf("\n价格:%.2f 元\t", books[index].price);
    printf("\t\t是否选择修改？(y/n)\t");
    scanf("%c",&choice);
    if(choice=='y'||choice=='Y')
    {
        printf("请输入图书价格:");
        scanf("%f",&books[index].price);
    }
    getchar();
    printf("\n---------------------------------------------------------\n");
    return 0;
}

// （5）借阅信息模块
// 办理借书手续时，先要在文件中查找要借的书的存在状态，若可以出借，则允许借出，把借书人姓名、性别和学号添加到该书的记录中，并把存在状态改为已经借出；否则，显示“抱歉，该书已借出”。办理还书手续时，在文件中查找该书的记录，然后把存在状态改为允许出借，把借书人姓名、性别和学号删除。具体修改操作可以参考删除操作。
int BookBorrow(Book *books, int index)
{
    if(!books[index].state)
    {
        books[index].state=1;
        printf("\n\n*可以借阅\n");
        printf("\n\n*请输入你的姓名:");
        scanf("%s",books[index].borrowerName);
        printf("\n*请输入你的性别(0)女  (1)男:");
        scanf("%d",&books[index].sex);
        printf("\n*请输入你的学号:");
        scanf("%s",books[index].stuNo);
        printf("\n\n----借阅成功----\n");

    }
    else
    {
        printf("\n\n*抱歉，此书已经被别人借走了。\n");
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
        printf("\n\n----还书成功！----");
    }
    else
    {
        printf("\n\n*你没有借阅这本图书哟！");
    }

}

int BookReadindex(Book *books, int index)
{
    printf("\n--------------------------\n");
    printf("图书编号:%s\n", books[index].loginNo);
    printf("书名:《%s》\n", books[index].name);
    printf("作者名:%s\n", books[index].author);
    printf("出版单位:%s\n", books[index].publisher);
    printf("价格:%.2f 元\n", books[index].price);
    if (books[index].state == 0)
        printf("状态:可以借阅");
    else
        printf("状态:已经借出");
    printf("\n--------------------------\n");
    return 1;
}

int BookReadindexOfadmin(Book *books, int index)
{
    // char loginNo[10];      //图书编号
    // char name[20];         //书名
    // char author[20];       //作者名
    // char publisher[10];    //出版单位
    // float price;           //价格
    // int state;             //存在状态，0代表可以出借，1代表已经借出
    // char borrowerName[10]; //借书人姓名
    // int sex;               //借书人性别，0代表女，1代表男
    // char stuNo[10];        //借书人学号
    printf("\n--------------------------\n");
    printf("图书编号:%s\n", books[index].loginNo);
    printf("书名:《%s》\n", books[index].name);
    printf("作者名:%s\n", books[index].author);
    printf("出版单位:%s\n", books[index].publisher);
    printf("价格:%.2f 元\n", books[index].price);
    if (books[index].state == 0)
        printf("状态:可以借阅");
    else
        printf("状态:已经借出");
    printf("\n\n借书人信息：\n姓名:%s\n", books[index].borrowerName);
    if(books[index].sex == 0)
    {
        printf("性别:女\n");
    }
    else
    {
        printf("性别:男\n");
    }
    printf("学号:%s\n", books[index].stuNo);
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
    printf("\n\n----删除成功----\n");
}
