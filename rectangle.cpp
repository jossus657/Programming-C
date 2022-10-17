/*
 Joshua Susanto
 405568250
 Discussion 1B
 */

#include <iostream>
#include <cmath>

using namespace std;


int main() {
    cout << "Enter length and width (separated by a space): ";
    double length;
    double width;
    cin >> length >> width;
    cout << "Area: " << length * width << endl
    << "Perimeter: " << 2 * length + 2 * width << endl
    << "Diagonal: " << sqrt(pow(length,2) + pow(width,2)) << endl;
    return 0;
}

