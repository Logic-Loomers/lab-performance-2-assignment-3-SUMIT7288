#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;
    string author;
    string isbn;
};
void searchBookByISBN(const vector<Book>& library, const string& isbn) {
    for (const auto& book : library) {
        if (book.isbn == isbn) {
            cout << "Title: " << book.title << endl;
            cout << "Author: " << book.author << endl;
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " is not available in the library." << endl;
}

int main() {
    vector<Book> library = {
        {"Book Title 1", "Author 1", "ISBN1"},
        {"Book Title 2", "Author 2", "ISBN2"},
    };

    string inputISBN;
    cout << "Enter ISBN: ";
    cin >> inputISBN;
    searchBookByISBN(library, inputISBN);

    return 0;
}
