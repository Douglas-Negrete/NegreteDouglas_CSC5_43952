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
    
    float a,b,c,sum;
    
    cout<<"Please input the number of tickets sold  by class. "
            "ex: 'a b c'"<<endl;
    cin>>a>>b>>c;
    a*=15;
    b*=12;
    c*=9;
    sum = a+b+c;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your total earnings are $"<<sum<<endl;
        
    
    return 0;
}
