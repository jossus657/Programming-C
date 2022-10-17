/*
 Joshua Susanto
 405568250
 Discussion 1B
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Enter string: ";
    string input;
    int largest = 1;
    int count = 0;
    char p;
    string max;
    getline(cin, input);
    for (int i = 0; i < input.length(); i++) {
        p = input[i];
        for (int j = i; j < input.length(); j++) { //if you start at i any repeating letters that have been printed  before will never be included again since at least one iteration of that letter will be behind i
            if (p == input[j]) {
                count ++;
            }
        }
    if (count > largest) {
        largest = count;
        max = p;
    } else if (count == largest) {
        largest = count;
        if (largest == 1) {
            max = p;
        } else {
            max = max + p ;
        }
    }
        count = 0;
        
    }
    cout << max << endl;
    
    return 0;
}
