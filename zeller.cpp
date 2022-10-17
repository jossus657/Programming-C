/*
 Joshua Susanto
 405568250
 Discussion 1B
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;


string day_of_week(int m, int d, int y) {
    
    if (m == 1 || m == 2) {
        m += 12;
        y -= 1;
    }
    
    int w = (d + 5 + (26*(m +1)/10) + (5*(y%100)/4) + (21*(y/100)/4))%7;
    
    string dow;
    
    if (w == 0) {
        dow = "Monday";
    } else if (w == 1) {
        dow = "Tuesday";
    } else if (w == 2) {
        dow = "Wednesday";
    } else if (w == 3) {
        dow = "Thursday";
    } else if (w == 4) {
        dow = "Friday";
    } else if (w == 5) {
        dow = "Saturday";
    } else if (w == 6) {
        dow = "Sunday";
    } else {
        dow = "ERROR";
    }
    return dow;
}

int main() {
    
    int month, day, year;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter day of month: ";
    cin >> day;
    cout << "Enter year: ";
    cin >> year;
    
    
    cout << "The day of the week: " << day_of_week(month, day, year) << endl;
    
    return 0;
}
