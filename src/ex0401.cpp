#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year;
    string month;
    int day;

};

struct Point {
    int x, y;
};
void printDate(Date& d) {
    cout << "Date " << d.month << " " << d.day << ", " << d.year << endl; }

    void printpoint(Point& p) {
        cout << "(" << p.x << ", " << p.y << ")" << endl;
    }
int main() {
    Date dob { 2025, "March", 15 };
    Date weddingday { 2000, "May", 31 };

    Point p, q, h;

    char trash;
    cout << "Enter point p: ";
    cin >> trash >> p.x >> trash >> p.y >> trash;

     cout << "Enter point q: ";
    cin >> trash >> q.x >> trash >> q.y >> trash;

 
    cout << "DOB:" << dob.month << " " << dob.day << ", " << dob.year << endl;

    printDate(dob);
    printDate(weddingday);
    printpoint(p);
    printpoint(q);

    h.x = (p.x + q.x) / 2;
    h.y = (p.y + q.y) / 2;
   
    printpoint(h);

    return 0;

}