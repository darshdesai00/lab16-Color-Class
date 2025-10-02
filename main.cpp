// COMSC-210 
// Lab 16: Color Class with Default Constructor
// Darsh Desai

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

    // setters
    void setRed(int r)   { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b)  { blue = b; }

    // getters
    int getRed()   { return red; }
    int getGreen() { return green; }
    int getBlue()  { return blue; }

    // print method
    void print() {
        cout << setw(W15) << "Red: "   << red   << endl;
        cout << setw(W15) << "Green: " << green << endl;