#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED


typedef struct book
{
    char loginNo[10];      //图书编号
    char name[20];         //书名
    char author[20];       //作者名
    char publisher[20];    //出版单位
    float price;           //价格
    int state;             //存在状态，0代表可以出借，1代表已经借出
    char borrowerName[10]; //借书人姓名
    int sex;               //借书人性别，0代表女，1代表男
    char stuNo[10];        //借书人学号
} Book;                    //图书信息结构体



// （1）图书信息输入模块,把图书信息写入图书信息文件。
int BookInput(Book *books, int *booksum);

// （2）图书信息浏览模块,分屏显示图书信息，每屏10条记录，按任意键显示下一屏。读文件然后显示即可。
int BookRead(Book *books, int booksum);

// （3）图书信息查询模块,通过菜单选择查询方式，提供按书名查询和按作者名查询两种查询方式。采用基本查找算法即可。

int BookLookupOfname(Book *books, char *name, int booksum);
int BookLookupOfauthor(Book *books, char *author, int booksum);


// （4）图书信息删除与修改模块,通过菜单选择删除操作，由于C语言没有提供直接删除文件记录的函数，因而需要自己实现：读记录，判断是否要删除（与输入的要删除的记录比较），如果要删除，则舍弃；否则重新写入文件。修改操作于删除操作类似，只是判断是否是要修改的记录，如果是，则把修改后的记录写入文件，否则直接写入文件。
int BookRevise(Book *books,int index);

// （5）借阅信息模块,办理借书手续时，先要在文件中查找要借的书的存在状态，若可以出借，则允许借出，把借书人姓名、性别和学号添加到该书的记录中，并把存在状态改为已经借出；否则，显示“抱歉，该书已借出”。办理还书手续时，在文件中查找该书的记录，然后把存在状态改为允许出借，把借书人姓名、性别和学号删除。具体修改操作可以参考删除操作。
int BookBorrow(Book *books, int index);

// 归还图书
int BookReturn(Book *books, int index,char *stuNo);

// 按编号读取图书
int BookReadindex(Book *books, int index);

// 按学号查询图书
int BookfindOfstuno(Book *books, char *stuNo, int booksum);

// 按编号读取图书（管理员）
int BookReadindexOfadmin(Book *books, int index);

// 删除模块
int BookDelete(Book *books, int index,int *booksum);






#endif // BOOK_H_INCLUDED
