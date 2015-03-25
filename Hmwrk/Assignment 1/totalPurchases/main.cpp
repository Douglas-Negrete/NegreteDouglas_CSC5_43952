/* 
 * File:   main.cpp
 * Author: andrewnegrete
 *
 * Created on February 18, 2015, 2:04 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float one, two, three, four, five, sub, tax, total;
    
    one = 15.95;
    two = 24.95;
    three = 6.95;
    four = 12.95;
    five = 3.95;
    
    sub = one + two + three + four + five;
    
    tax = sub * 0.07;
    
    total = sub + tax;
    
    cout << "The first item is " << one << "\n";
    cout << "The second item is " << two << "\n";
    cout << "The third item is " << three << "\n";
    cout << "The fourth item is " << four << "\n";
    cout << "The fifth item is " << five << "\n";
    cout << "The subtotal is " << sub << "\n";
    cout << "The tax is " << tax << "\n";
    cout << "The total is " << total << endl;
    
    return 0;
}

