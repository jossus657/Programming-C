/*
 Joshua Susanto
 405568250
 Discussion 1B
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    cout << "Enter word: ";
    string word;
    string bw;
    cin >> word;
    for (double i = (word.length()-1); i >= 0; i--){
        bw = bw + word[i];
    }
    
    cout << "Backwards: " << bw << endl;
    
    return 0;
}
