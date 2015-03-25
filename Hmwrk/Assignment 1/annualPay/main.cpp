/* 
 * File:   main.cpp
 * Author: andrewnegrete
 *
 * Created on February 18, 2015, 1:45 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    unsigned short int payAmount, payPeriods, annualPay;
    
    payAmount = 2200.0;
    
    payPeriods = 26;
    
    annualPay = payAmount * payPeriods;
    
    cout << "The total annual pay is " << annualPay;
    
    return 0;
}

