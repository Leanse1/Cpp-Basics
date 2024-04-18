#include <iostream>
#include "Book.h"
using namespace std;

void printBookDetails(const Book& book);

int main()
{
    Book gameOfThrones("George Martin","Game of throne", "Fantasy", 864);

    printBookDetails(gameOfThrones);
    return 0;
}

void printBookDetails(const Book& book) //Book = book
{
    cout<<book.getTitle()<<" by "<<book.getAuthor()
           <<" has "<<book.getNumPages()<<" pages, "
           <<" and its genre is " << book.getGenre() <<endl;
}