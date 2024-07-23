//#include<iostream>
//#include<string>
//using namespace std;
//class Books
//{
//    string name;
//    string author;
//    int publicationYear;
//public:
//    Books()
//    {
//        name = "";
//        author = "";
//        publicationYear = 0000;
//    }
//    Books(const string& t, const string& a, int pYear)
//    {
//        name = t;
//        author = a;
//        publicationYear = pYear;
//
//    }
//
//    string getTitle()
//    {
//        return name;
//    }
//
//    string getAuthor()
//    {
//        return author;
//    }
//
//    int getPublicationYear()
//    {
//        return publicationYear;
//    }
//};
//class Library
//{
//    Books* books;
//    int numBooks;
//    int maxBooks;
//public:
//    Library()
//    {
//        numBooks = 0;
//        maxBooks = 0;
//        books = new Books[maxBooks];
//    }
//
//    void addBook(const Books& book)
//    {
//
//        books[numBooks++] = book;
//    }
//
//    void displayBooks() const {
//        for (int i = 0; i < numBooks; i++) {
//            cout << "Title: " << books[i].getTitle() << endl;
//            cout << "Author: " << books[i].getAuthor() << endl;
//            cout << "Publication Year: " << books[i].getPublicationYear() << endl;
//            cout << endl;
//        }
//    }
//    ~Library()
//    {
//        delete[] books;
//    }
//
//
//};
//int main()
//{
//
//    Books book1("It starts with us ", "Collin Hoover", 1967);
//    Books book2("To Kill a Mockingbird", "Coolin Hoover", 1996);
//    Books book3("1984", "George Orwell", 1949);
//
//
//    Library library;
//    library.addBook(book1);
//    library.addBook(book2);
//    library.addBook(book3);
//
//
//    library.displayBooks();
//}