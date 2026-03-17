#include <iostream>
#include <string>

using namespace std;

class Author {
    private:
    string name, nationality;


    public:
    Author(const string& name, const string& nationality): name(name), nationality(nationality) {}

    string getName() const { return name; }
    string getNationality() const { return nationality; }

    void setName(const string& name) { this->name = name; }
    void setNationality(const string& nat) { this->nationality = nat; }

};

class Book {
    private:
    string title;
    Author author;
    int year;

    public:
    Book(const string& t, const Author& a, int y): title(t), author(a), year(y) {}

    string getTitle() const { return title; }
    Author getAuthor() const { return author; }
    int getYear() const { return year; }

    void setTitle(const string& t) { this->title = t; }
    void setAuthor(const Author& a) { this->author = a; }
    void setYear(int y) { this->year = y; }

    void show () const {
        cout << "Book: " << title << " ( " << year << " )" << endl;
        cout << "Author: " << author.getName() << " [" << author.getNationality() << "]" << endl;
        cout << "Year: " << year << endl;
    }


};

int main() {

    Author a("George Orwell", "British");
    Book b("1984", a, 1949);

    b.show();
    
    return 0;

}