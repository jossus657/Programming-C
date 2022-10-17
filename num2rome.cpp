/*
 Joshua Susanto
 405568250
 Discussion 1B
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
    
    cout << "Enter integer from 1 to 3,999: ";
    int num;
    string rom;
    cin >> num;
    if (num >= 1000){
        rom = rom + "M";
        num = num - 1000;
    }
    if (num >= 1000){
        rom = rom + "M";
        num = num - 1000;
    }
    if (num >= 1000){
        rom = rom + "M";
        num = num - 1000;
    }
    if (num >= 900){
        rom = rom + "CM";
        num = num - 900;
    }
    if (num >= 500){
        rom = rom + "D";
        num = num - 500;
    }
    if (num >= 400){
        rom = rom + "CD";
        num = num - 400;
    }
    if (num >= 100){
        rom = rom + "C";
        num = num - 100;
    }
    if (num >= 100){
        rom = rom + "C";
        num = num - 100;
    }
    if (num >= 100){
        rom = rom + "C";
        num = num - 100;
    }
    if (num >= 90){
        rom = rom + "XC";
        num = num - 90;
    }
    if (num >= 50){
        rom = rom + "L";
        num = num - 50;
    }
    if (num >= 40){
        rom = rom + "XL";
        num = num - 40;
    }
    if (num >= 10){
        rom = rom + "X";
        num = num - 10;
    }
    if (num >= 10){
        rom = rom + "X";
        num = num - 10;
    }
    if (num >= 10){
        rom = rom + "X";
        num = num - 10;
    }
    if (num >= 9){
        rom = rom + "IX";
        num = num - 9;
    }
    if (num >= 5){
        rom = rom + "V";
        num = num - 5;
    }
    if (num >= 4){
        rom = rom + "IV";
        num = num - 4;
    }
    if (num >= 1){
        rom = rom + "I";
        num = num - 1;
    }
    if (num >= 1){
        rom = rom + "I";
        num = num - 1;
    }
    if (num >= 1){
        rom = rom + "I";
        num = num - 1;
    }
    
    cout << "Roman numeral: " << rom << endl;
    
    return 0;
}

