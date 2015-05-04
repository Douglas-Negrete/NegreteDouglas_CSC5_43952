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
float blnPmnt(float,float,int,float);//for-loop
//execution
int main(int argc, char** argv) {
    //declare variables
    float purPrce=1e4f;//purchase price $10k
    float dwnPymt = 1e-1f;//Down payment % of purchase price
    float intRate=3.29e-2f;//interest rate per year
    int nMnths=60;//number of months
    float mnPmnt=1.6543e2f;//monthly payment
    //calculate the amount to finance
    float finance=purPrce*(1-dwnPymt);
    //output all the initial conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Purchase Price    = $"<<purPrce<<endl;
    cout<<"Down payment      = $"<<purPrce*dwnPymt<<endl;
    cout<<"Interest Rate     =  "<<intRate*100<<"%"<<endl;
    cout<<"Months to Finance =  "<<nMnths<<endl;
    cout<<"Amount Financed   = $"<<finance<<endl;
    //calculate the monthly payment without interest
    float mnPmn=finance/nMnths;//Payment without interest
    //calculate the balloon payment tending to zero
    float bln=0,incrmnt=0;
    do{
        incrmnt=bln/nMnths;
        mnPmnt+=incrmnt;
        bln=blnPmnt(finance,intRate/12,nMnths,mnPmnt);
    }while(incrmnt>.01||incrmnt<-.01);
    //Balloon payment and monthly payment
    cout<<"Monthly Payment   = $"<<mnPmnt<<endl;
    cout<<"Balloon Payment   = $"<<bln<<endl;
    //exit stage right
    return 0;
}

//balloon payment function
//input
//  f-financed amount $'s
//  i-interest rate/month
//  n-number of months
//  p-monthly payment
//output
//  bln-balloon payment in dollars
float blnPmnt(float f,float i,int n,float p){
    for(int month=1;month<n;month++){
        
        f*=(1+i);//increase due to the interest rate
        f-=p;//decrease due to payment
        
    }
    return f;//balloon payment
}

