/* 
 * File:   main.cpp
 * Author: andrewnegrete
 *
 * Created on February 18, 2015, 1:40 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float one, two, three, four, five, sum, average;
    
    one = 28;
    two = 32;
    three = 37;
    four = 24;
    five = 33;
    
    sum = one + two + three + four + five;
    
    average = sum / 5;
    
    cout << "The average is " << average;
    
    return 0;
}

