/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 29, 2015, 7:56 AM
 */

//System libs
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

//user libs

//global constants

//function prototypes
float ourExp(float x);
double ourExp(double x);

//execution starts here
int main(int argc, char** argv) {
    //set the rand num seed
    srand(static_cast<unsigned int>(time(0)));
    //declare and init variables
    const unsigned int MAX=pow(2,31)-1;
    float xf=1.0f*rand()/MAX*3+1;//(1,4)
    double xd=1.0f*rand()/MAX*3+1;//(1,4)
    //call functions and compare
    float expAprx=ourExp(xf);
    float libExp=exp(xf);
    float prcntEr=(libExp-expAprx)/libExp*100;
    cout<<"float exp("<<xf<<")= "<<libExp<<", "<<expAprx<<", "<<prcntEr<<"%"<<endl;
    
    //call functions and compare
    double expAprxd=ourExp(xd);
    double libExpd=exp(xd);
    double prcntErd=(libExpd-expAprxd)/libExpd*100;
    cout<<"double exp("<<xd<<")= "<<libExpd<<", "<<expAprxd<<", "<<prcntErd<<"%"<<endl;
    
    //exit
    return 0;
}

float ourExp(float x){
    //declare variables
    float term=1,exp=1,tol=x*1.0e-7f;
    for(int nterm=1;term>tol;nterm++){
        term*=x/nterm;
        exp+=term;
    }
    return exp;
}

double ourExp(double x){
    //declare variables
    double exp=1;
    for(double tol=x*1.0e-7f,term=1,nterm=1;term>tol;nterm++){term*=x/nterm;exp+=term;}
    return exp;
}