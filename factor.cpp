/*
 Joshua Susanto
 405568250
 Discussion 1B
 */


#include <iostream>

using namespace std;

int main() {
   
    cout << "Enter positive integer: ";
    int num;
    cin >> num;
    int i;
    cout << "Factors: " << endl;
    for (i = 2; i <= num + 1; i++) {
        if (num % i == 0) {
            num = num/i;
            cout << i << endl;
            i = 1;
        }
    }
    return 0;
}
