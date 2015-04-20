/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      create a project that has multiple functions to solve the same problem
 * Created on April 20, 2015, 8:13 AM
 */

//system libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//user libraries

//global constants

//function prototypes
float save1(float,float,int);//power funcion
float save2(float,float,int);//exp and log 
float save3(float,float,int);//for loop
float save4(float,float,int);//recursive
float save5(float=100.0f,float=0.08f,int=9);//defaulted parameter
void save6(float &,float,float,int);//pass by reference
void save7(float &,float,int);//pass by reference
float save1(float,float,float);//overriden function


//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float pv=100.0f;//present value $'s
    float ir=0.08f;//interest rate %/yr
    int nC=9;//number of compounding periods yr's
    //output the inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present value = $"<<pv<<endl;
    cout<<"Interest rate "<<ir*100<<"%"<<endl;
    cout<<"Number of compounding periods = "<<nC<<"(yrs)"<<endl<<endl;
    //calculate our savings
    cout<<"Savings Function 1 = $"<<save1(pv,ir,nC)<<endl;
    float nCf=nC;
    cout<<"Savings Function 1 = $"<<save1(pv,ir,nCf)<<endl;
    cout<<"Savings Function 2 = $"<<save2(pv,ir,nC)<<endl;
    cout<<"Savings Function 3 = $"<<save3(pv,ir,nC)<<endl;
    cout<<"Savings Function 4 = $"<<save4(pv,ir,nC)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv,ir,nC)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv,ir)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv)<<endl;
    cout<<"Savings Function 5 = $"<<save5()<<endl;
    float fv;
    save6(fv,pv,ir,nC);
    cout<<"Savings Function 6 = $"<<fv<<endl;
    save7(pv,ir,nC);
    cout<<"Savings Function 7 = $"<<pv<<endl;
    return 0;
}

//function for future value calculation
//inputs
//     p-present value $'s
//     i-interest rate %/compounding period
//     n-compounding period yr's
//outputs
//     fv-future value $'s
float save1(float p,float i,int n){
    return p*pow((1+i),n);
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,int n){
    if(n<=0)return p;//first return
    return save4(p,i,n-1)*(1+i);//second return
}

float save5(float p,float i,int n){
    return p*pow((1+i),n);
}

void save6(float &f,float p,float i,int n){
    f=p*pow((1+i),n);
}

void save7(float &p,float i,int n){
    p=p*pow((1+i),n);
}

float save1(float p,float i,float n){
    return p*pow((1+i),n);
}

