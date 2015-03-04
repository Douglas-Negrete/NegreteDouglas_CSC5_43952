/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      purpose: calculate commission on stock
 *
 * Created on March 4, 2015, 10:02 AM
 */

#include <iostream>
using namespace std;
//user libraries

//global constants

//function prototypes

//execution

int main(int argc, char** argv) {

    unsigned short stck,stckcom,total;
    float comprct;
    
    comprct = 0.02;
    
    stck=750*35;
    stckcom = stck* comprct+0.5;
    total = stck+stckcom;
    
    cout<<"the stock alone is "<<stck<<endl;
    cout<<"the amount of commission is "<<stckcom<<endl;
    cout<<"the total is "<<total<<endl;
    
    return 0;
}

