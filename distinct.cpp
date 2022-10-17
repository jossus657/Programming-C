/*
 Joshua Susanto
 405568250
 Discussion 1B
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned long distinct(vector <string> vin) {

    if (vin.size() == 0) {
        return 0;
    }
    
    unsigned long vin_size = vin.size();
    
    unsigned long num = 0;
    
    for (int i = 0; i < vin_size - 1; i++) {
        for (int j = i + 1; j < vin_size; j++) {
            if (vin[i] == vin[j]) {
                vin[j] = vin[vin_size - 1];
                vin.pop_back();
                j--;
            }
            vin_size = vin.size();
        }
    }
    
    
    num = vin.size();
    
    return num;
}

int main() {
    
    vector <string> input;
    
    string words;
    
    cout << "Enter list of words: ";
    
    while (cin >> words) {
        if (words == ".") {
            break;
        }
        input.push_back(words);
    }
    
    cout << "Number of distinct words: " << distinct(input) << endl;
    
    return 0;
}
