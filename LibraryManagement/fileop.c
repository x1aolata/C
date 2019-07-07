#include <stdio.h>
#include "fileop.h"
#include "book.h"

void WritetoFile(Book *books,int booksum)
{
    FILE *fp = NULL;
    fp = fopen("books.txt", "w");
    fwrite(books,sizeof(Book),booksum,fp);
    fclose(fp);
}


void ReadfromFile(Book *books,int *booksum)
{
    int i;
    FILE *fp = NULL;
    fp = fopen("books.txt", "r");
    for (i = 0; !feof(fp); i++)
    {
        fread(&books[i], sizeof(Book), 1, fp);
    }
    *booksum +=i-1;
    fclose(fp);
}
