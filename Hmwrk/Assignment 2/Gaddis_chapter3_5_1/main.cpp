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
    
    float a,b,sum;
    
    cout<<"Please input the number of females, and males in a class. "
            "ex: '20 19'(note, the number of females should be first)"<<endl;
    cin>>a>>b;
    sum+=a+b;
    a=a/sum;
    b=b/sum;
    cout<<fixed<<setprecision(0)<<showpoint;
    cout<<"The percentage of females in the class is "<<a*100<<"%"<<endl;
    cout<<"The percentage of males in the class is "<<b*100<<"%"<<endl;
        
    
    return 0;
}
