/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      create a project that has multiple functions to solve the same problem
 * Created on April 27, 2015, 8:13 AM
 */

//system libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//user libraries

//global constants

//function prototypes
float rtirmnt(float,float,int,float);//for loop


//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float pv=0.0f;//present value $'s
    float ir=0.05f;//interest rate %/yr
    float fdep=0.10f;//babylonians say 10%
    float salary=220000;//salary in $'s/yr
    //calculate our savings required
    float savReq=salary/ir;//savings require $'s
    //output all initial conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Investment rate from municipal bonds = "<<ir*100<<"%"<<endl;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Yearly retirement saved = $"<<salary*fdep<<endl;
    cout<<"Savings required to retire = $"<<savReq<<endl;
    cout<<endl<<"Year  Ret Savings"<<endl;
    float retSav = 0;
    //output the inputs
    for(int year=1;retSav<savReq;year++){
        retSav=rtirmnt(pv,ir,year,salary*fdep);
        cout<<setw(4)<<year<<setw(13)<<retSav<<endl;
    }
    return 0;
}

//function for future value calculation
//inputs
//     p-present value $'s
//     i-interest rate %/compounding period
//     n-compounding period yr's
//     d-deposit yearly
//outputs
//     fv-future value $'s
float rtirmnt(float p,float i,int n,float d){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}
