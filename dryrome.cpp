/*
 Joshua Susanto
 405568250
 Discussion 1B
 */

#include <iostream>
#include <string>

using namespace std;

string roman_digit(int input, string ones, string fives, string tens) {
    
    string digit;
    
    if (input == 10) {
        digit = digit + tens;
        input = input - 10;
    }
    if (input >= 9) {
        digit = digit + ones + tens;
        input = input - 9;
    }
    if (input >= 5) {
        digit = digit + fives;
        input = input - 5;
    }
    if (input >= 4) {
        digit = digit + ones + fives;
        input = input - 4;
    }
    if (input >= 1) {
        digit = digit + ones;
        input = input - 1;
    }
    if (input >= 1) {
        digit = digit + ones;
        input = input - 1;
    }
    if (input >= 1) {
        digit = digit + ones;
        input = input - 1;
    }
    
    return digit;
    
}

int main() {
    
    string thousands_place;

    cout << "Enter integer from 1 and 3,999: ";
    int input;
    cin >> input;
    
    if (input >= 1000) {
        thousands_place = thousands_place + "M";
        input = input - 1000;
    }
    if (input >= 1000) {
        thousands_place = thousands_place + "M";
        input = input - 1000;
    }
    if (input >= 1000) {
        thousands_place = thousands_place + "M";
        input = input - 1000;
    }
    
    string ones_place = roman_digit(input % 10, "I", "V", "X");
    
    input = input/10;
    
    string tens_place = roman_digit(input % 10, "X", "L", "C");
    
    input = input/10;
    
    string hundreds_place = roman_digit(input % 10, "C", "D", "M");
    
    cout << "Roman numeral: " << thousands_place << hundreds_place << tens_place << ones_place << endl;
    
    return 0;
}
