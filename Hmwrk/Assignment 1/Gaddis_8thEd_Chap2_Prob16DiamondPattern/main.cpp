/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      purpose: make a diamond
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

    char c;
    
    cout<<"what would you like the c to be made out of?"<<endl;
    cin>>c;
    
    cout<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<endl;
    cout<<c<<c<<c<<c<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<"   "<<c<<endl;
    
    return 0;
}

