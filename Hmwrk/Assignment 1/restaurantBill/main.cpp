/* 
 * File:   main.cpp
 * Author: andrewnegrete
 *
 * Created on February 18, 2015, 1:33 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float meal, tax, tip, bill;
    
    meal = 88.67;
    
    tax = meal * 0.0675;
    
    tip = (meal + tax) * .2;
    
    bill = meal + tax + tip;
    
    cout << "The meal was " << meal << ", the tax was " << tax << 
                ", the tip was " << tip << ", and the total bill was " << 
                    bill << endl;
    
    return 0;
}

