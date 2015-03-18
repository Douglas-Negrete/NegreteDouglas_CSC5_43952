/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *
 * Created on March 18, 2015, 9:19 AM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    
    float a,b,c,sum;
    string month1, month2, month3;
    
    cout<<"Please input three month's average rainfall. "
            "ex: 'July 4.72'"<<endl;
    cout<<"First month: "<<endl;
    cin>>month1>>a;
    cout<<"Second month: "<<endl;
    cin>>month2>>b;
    cout<<"Third month: "<<endl;
    cin>>month3>>c;
    sum+=(a+b+c)/3;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average rainfall for the months of "<<month1<<", "<<month2<<", "
            <<month3<<" is "<<sum<<endl;
        
    
    return 0;
}
