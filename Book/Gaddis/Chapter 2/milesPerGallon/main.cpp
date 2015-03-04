/* 
 * File:   main.cpp
 * Author: andrewnegrete
 *
 * Created on February 18, 2015, 2:19 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    double miles, gallons, mpg;
    
    miles = 375;
    gallons = 15;
    
    mpg = miles/gallons;
    
    cout << "The car gets " << mpg << " miles per gallon" << endl;
    
    return 0;
}

