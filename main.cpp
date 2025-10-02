// finished default constructor part
// finished adding all of the full parameter constructor : (r,g,b)
// finished adding the partial constructor (just red, defaults others to 0)
// this is the final version showing all constructors together

#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;


class Color {
private:
    int red;
    int green;
    int blue;
public:
    // default constructor
    Color() { red = 0; green = 0; blue = 0; }

    // full parameter constructor
    Color(int r, int g, int b) { red = r; green = g; blue = b; }

    // partial constructor (only red provided, green & blue default to 0)
    Color(int r) { red = r; green = 0; blue = 0; }

    // setters
    void setRed(int r)   { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b)  { blue = b; }

    // getters
    int getRed()   { return red; }
    int getGreen() { return green; }
    int getBlue()  { return blue; }

    // the print method
    void print() {
        cout << setw(W15) << "Red: "   << red   << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: "  << blue  << endl;
    }
}; // important dont forget this one!!!

int main() {
    cout << "Demonstrating all Color constructors:\n\n";

    // this object using default constructor
    Color c1;  
    c1.print();
    cout << endl;

    // thus objects using full parameter constructor
    Color c2(255, 0, 0);   // pure red
    c2.print();
    cout << endl;

    Color c3(0, 255, 0);   // pure green
    c3.print();
    cout << endl;

    Color c4(0, 0, 255);   // pure blue
    c4.print();
    cout << endl;

    // this object using partial constructor
    Color c5(128);         // medium red, green/blue = 0
    c5.print();
    cout << endl;

    return 0;
}
