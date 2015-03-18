/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *
 * Created on March 18, 2015, 9:19 AM
 */

#include <iostream>

using namespace std;
//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    
    float gal, miles;
    
    cout<<"Please input the number of gallons your car can hold."<<endl;
    cin>>gal;
    cout<<"Please input the number of miles your car can go on a full "
            "tank."<<endl;
    cin>>miles;
    
    cout<<"Your car's mpg is "<<miles/gal<<endl;
        
    
    return 0;
}
