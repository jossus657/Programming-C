/*
 Joshua Susanto
 405568250
 Discussion 1B
 */



#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;
    if (a == b) {
        if (c == d) {
            cout << "This is: Two pairs" << endl;
        } else {
            cout << "This is: Not two pairs" << endl;
        }
    } else if (a == c) {
        if (b == d) {
            cout << "This is: Two pairs" << endl;
        } else {
            cout << "This is: Not two pairs" << endl;
        }
    } else if (a == d) {
        if (b == c) {
            cout << "This is: Two pairs" << endl;
        } else {
            cout << "This is: Not two pairs" << endl;
        }
    } else {
        cout << "This is: Not two pairs" << endl;
    }
   
    return 0;
}
