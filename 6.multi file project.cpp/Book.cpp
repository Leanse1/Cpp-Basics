#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(string author, string title,
            string genre, int numPages)  // similar to python import book.book
{
    this->author = author; //call from book.h = string author 
    this->title = title;
    this->genre = genre;
    this->numPages = numPages;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getTitle() const
{
    return title;
}
string Book::getGenre() const
{
    return genre;
}
int Book::getNumPages() const
{
    return numPages;
}
