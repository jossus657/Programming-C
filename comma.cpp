/*
Joshua Susanto
405568250
Discussion 1B
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Please enter an integer between 1000 and 999999: ";
    string enter;
    cin >> enter;
    string enter1 = enter.substr(enter.length()-3);
    string enter2 = enter.substr(0, enter.length()-3);
    cout << "With comma separating thousands: "  << enter2 << "," << enter1 << endl;

    return 0;
}


