#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;


class Color{
private:
    double r, g, b;

public:
    // default to black
    Color(): r(0), g(0), b(0) {}
    Color(double r, double g, double b): r(r), g(g), b(b) {}

string toRGB() const{
    stringstream sout;
    sout << "rgb(" << static_cast<int>(r * 255) << ", " << static_cast<int>(g * 255) << ", " << static_cast<int>(b * 255) << ")";
    return sout.str();
}

string toHEX() const{ // #01AC03
    stringstream sout;
    sout << "#" << setfill('0') << hex
        << setw(2) << static_cast<int>(r * 255) 
        << setw(2) << static_cast<int>(g * 255) 
        << setw(2) << static_cast<int>(b * 255);
    return sout.str();
}

    friend ostream& operator<<(ostream& out, const Color& c){
        out << c.toHEX();
        return out;
}

friend istream& operator>>(istream& in, Color& c){
    in >> c.r >> c.g >> c.b;
        return in;
}

double operator[](int index) const {
    switch (index) {
        case 0: return r;
        case 1: return g;
        case 2: return b;
        default: throw out_of_range("Index must be 0, 1, or 2");
    }
}

double& operator[](int index) {
    switch (index) {
        case 0: return r;
        case 1: return g;
        case 2: return b;
        default: throw -1.0;;
    }
}


    bool operator==(const Color& c) const{
        return r == c.r && g == c.g && b == c.b;
    }


};

    int main(){
    Color c; // Black
    Color c1(1.0, 0.25, .5);


    cout << c << endl; // <<(cout, c)
    cout << c1 << endl;

    cout << c.toRGB() << "_______" << c.toHEX() << endl;
    cout << c1.toRGB() << "_______" << c1.toHEX() << endl;

    Color c2;
    cout << "Enter a color (three value betweeen 0.1 and 1.0):";
    cin >> c2;

    cout << "\nc1 red:" << c1[0] << endl; // read only
    cout << "\nc1 green:" << c[1] << endl;
    cout << "\nc1 blue:" << c2[2] << endl;

    c2[1] = .6; //write

    if(c1 == c2){ //==(c1, c2) become c1.==(c2)
        cout << "Same" << endl;
    } else{
        cout << "Different" << endl;
        
    }


    return 0;

    }
