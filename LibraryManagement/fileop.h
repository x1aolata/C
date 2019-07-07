#ifndef FILEOP_H_INCLUDED
#define FILEOP_H_INCLUDED
#include "book.h"

void WritetoFile(Book *books,int booksum);

void ReadfromFile(Book *books,int *booksum);

#endif // FILEOP_H_INCLUDED
