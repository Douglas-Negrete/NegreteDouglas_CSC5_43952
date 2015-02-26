/* 
 * File:   main.cpp
 * Author: douglasnegrete
 *
 * Created on February 23, 2015, 9:57 AM
 *  Purpose: Input/Output/processes
 *      Flowchart
 */

//system libraries
#include <iostream>//I/O library
using namespace std;//I/O library under std namespace

//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    //inputs:
    //  Pay rate = payRate -> $'s/hr
    //  hours worked = hrsWrkd -> hrs
    //output:
    //  gross pay check amount = payChk -> $'s
    float payRate, hrsWrkd, payChk;
    //prompt the users for inputs
    cout<<"this program calculates your gross paycheck"<<endl;
    cout<<"input your pay rate as $xx.xx, provide the x's"<<endl;
    cin>>payRate;
    cout<<"input your hours worked this pay period."<<endl;
    cout<<"format xxx.x, provide the x's"<<endl;
    cin>>hrsWrkd;
    //calculate the paycheck
    payChk = payRate * hrsWrkd;
    //show the work
    cout << "$" << payChk << " = $" <<payRate<<"/hr * "<<hrsWrkd<<"(hrs)"<<endl;
    //exit stage right
    return 0;
}

