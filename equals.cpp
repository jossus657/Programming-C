/*
 Joshua Susanto
 405568250
 Discussion 1B
 */

#include <iostream>

using namespace std;



bool equals(int a[], int a_size, int b[], int b_size) {

    if(a_size == b_size){
        for(int i = 0; i < a_size; i++) {
            if(a[i] == b[i]) {
                continue;
            } else {
                return false;
            }
        }
        return true;
        
    } else {
        
        return false;
    }
}


int main() {

    const int capacity = 100;
    
    int arr_a[capacity];
    
    int csa = 0;
        
    int values;
    
    cout << "Enter array 1 (Q to quit): ";
    
    while(cin >> values) {
        if(csa < capacity) {
            arr_a[csa] = values;
            csa++;
        }
    }
    
    cin.clear();
    cin.ignore();
    
    int arr_b[capacity];
    
    int csb = 0;
    
    cout << "Enter array 2 (Q to quit): ";
    
    while(cin >> values) {
        if(csb < capacity) {
            arr_b[csb] = values;
            csb++;
        }
    }
    
    if (equals(arr_a, csa, arr_b, csb)) {
        cout << "These arrays are: Equal" << endl;
    } else {
        cout << "These arrays are: Not equal" << endl;
    }
    
    
    return 0;
}
