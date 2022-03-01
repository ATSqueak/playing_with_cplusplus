#include <iostream>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;
    
    Book() {
        
        title = "No Title";
        author = "No Author";
        pages = 0;
    }
    
    Book(string aTitle, string aAuthor, int aPages) {
        
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    Book book1("The North Wind","Mealy",200);
    
    Book book2("The Ketchup Mystery","Mouth",500);
    
    Book book3;
    
    cout << book1.title << endl;
    cout << book2.title << endl;
    cout << book3.title << endl;
    
    return 0;
}
