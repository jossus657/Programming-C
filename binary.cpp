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
    cout << "Binary: " << endl;
    
    if (num == 0){
        cout << 0 << endl;
    }
    
    while(num != 0) {
        cout << num%2 << endl;
        num = num/2;
    }
    
        
    return 0;
}
