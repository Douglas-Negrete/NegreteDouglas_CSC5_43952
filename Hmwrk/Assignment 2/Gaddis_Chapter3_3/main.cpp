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
    
    float a,b,c,d,e,sum;
    
    cout<<"Please input five test scores. "
            "ex: '90 90 89 85 86'"<<endl;
    cin>>a>>b>>c>>d>>e;
    sum+=(a+b+c+d+e)/5;
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Your total average is "<<sum<<endl;
        
    
    return 0;
}
