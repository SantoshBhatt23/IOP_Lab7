#include <stdio.h>
#include <string.h>
void BookInfo(void)
{
    char BookName[50],Author[30],rel_year[5];
    printf("enter book name: ");
    fgets(BookName,50,stdin);
    printf("enter Author name: ");
    fgets(Author,30,stdin);
    printf("enter Release year: ");
    fgets(rel_year,5,stdin);
    printf("Book Name = %s",BookName);
    printf("Author Name = %s",Author);
    printf("release Year = %s",rel_year);
    return;
}
int main()
{
    BookInfo();
    return 0;
}