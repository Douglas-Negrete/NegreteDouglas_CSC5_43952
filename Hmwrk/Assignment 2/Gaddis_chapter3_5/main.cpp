/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *
 * Created on March 18, 2015, 9:19 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;
//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    
    float sugar,butter,flour,ckie;
    
    cout<<"Please input the number of cookies you would like to make"<<endl;
    cin>>ckie;
    sugar=(1.5/48)*ckie;
    butter=(1.0/48)*ckie;
    flour=(2.75/48)*ckie;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"To make that many cookies you will need "<<sugar<<" "
            "cups of sugar"<<endl;
    cout<<"To make that many cookies you will need "<<butter<<" "
            "cups of butter"<<endl;
    cout<<"To make that many cookies you will need "<<flour<<" "
            "cups of flour"<<endl;
        
    
    return 0;
}
