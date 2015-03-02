/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 * Created on March 2, 2015, 9:03 AM
 *      purpose: free fall problem from savitch
 */

#include <iostream>
using namespace std;

//user libraries

//global constants
const float G=3.2174e1f;//acceleration in ft?sec^s
const float CNVFTMT=3.048e-1f;//conversion from feet to meters

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float time, dstnce;
    //prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx(seconds)"<<endl;
    cin>>time;
    //calculate the distance
    //dstnce = static_cast<float>(1)/2*G*time*time;
    //dstnce = 1.0f/2*G*time*time;
    //dstnce = 1/2.0f*G*time*time;
    //dstnce = 1.0f/2.0f*G*time*time;
    //dstnce = G*1/2*time*time;
    dstnce = 0.5f*G*time*time;
    cout<<"Distance fall = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fall = "<<dstnce*CNVFTMT<<"(metes)"<<endl;
    //Exit
    return 0;
}

