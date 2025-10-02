// COMSC-210 
// Lab: Color Class
// This program defines a Color class with RGB values, 
// uses setters/getters to modify and access private members, 
// and prints the values using a class method.

#include <iostream>
#include <iomanip>
using namespace std;

// constant for neat output formatting
const int W15 = 15;

// Color class definition
class Color {
private:
    int red;    // red component (0–255)
    int green;  // green component (0–255)
    int blue;   // blue component (0–255)
public:
    // ----- setters -----
    void setRed(int r)    { red = r; }
    void setGreen(int g)  { green = g; }
    void setBlue(int b)   { blue = b; }

    // ----- getters -----
    int getRed()   { return red; }
    int getGreen() { return green; }
    int getBlue()  { return blue; }

    // ----- print method -----
    // neatly outputs RGB values to the console
    void print() {
        cout << setw(W15) << "Red: "   << red   << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: "  << blue  << endl;
    }
};

// main function demonstrates the Color class
int main() {
    cout << "Color values:\n\n";

    // first color object (pure red)
    Color c1;
    c1.setRed(255);
    c1.setGreen(0);
    c1.setBlue(0);
    c1.print();
    cout << endl;

    // second color object (pure green)
    Color c2;
    c2.setRed(0);
    c2.setGreen(255);
    c2.setBlue(0);
    c2.print();
    cout << endl;

    // third color object (pure blue)
    Color c3;
    c3.setRed(0);
    c3.setGreen(0);
    c3.setBlue(255);
    c3.print();
    cout << endl;

    return 0;
}
