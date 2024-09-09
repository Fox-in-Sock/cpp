/*Task Description
    Create a class author with attributes name and qualification.
    Create a class publication with an attribute pname.
    Derive a class book from author and publication with attributes title and price.
    Each class should have getdata() and putdata() methods.
    Create instances of the class book in the main function.
*/



#include <iostream>
#include <string>
using namespace std;

class Author {
public:
    string name;
    string qualification;

    void getdata() {
        cout << "Enter author's name: ";
        cin >> name;
        cout << "Enter author's qualification: ";
        cin >> qualification;
    }

    void putdata() {
        cout << "Author's Name: " << name << endl;
        cout << "Author's Qualification: " << qualification << endl;
    }
};

class Publication {
public:
    string pname;

    void getdata() {
        cout << "Enter publication name: ";
        cin >> pname;
    }

    void putdata() {
        cout << "Publication Name: " << pname << endl;
    }
};

class Book : public Author, public Publication {
public:
    string title;
    float price;

    void getdata() {
        Author::getdata();
        Publication::getdata();
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter book price: ";
        cin >> price;
    }

    void putdata() {
        Author::putdata();
        Publication::putdata();
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }
};

int main() {
    Book book;
    book.getdata();
    book.putdata();
    return 0;
}
