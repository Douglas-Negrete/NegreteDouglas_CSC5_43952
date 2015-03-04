/* 
 * File:   main.cpp
 * Author: andrewnegrete
 *
 * Created on February 18, 2015, 2:25 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float survey, drinks, citrus;
    
    survey = 16500.0f;
    
    drinks = survey * .15f;
    
    citrus = drinks * .58f;
    
    cout << "The number of people who buy energy drinks is " << drinks << "\n";
    cout << "The number of people who get citrus is " << citrus << endl;
    
    return 0;
}

