/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      Purpose: 2nd homework problem
 *
 * Created on March 4, 2015, 8:27 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//function prototypes

//Execution begins here

int main(int argc, char** argv) {
    //declare var
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //assigned values
    nCust=16500;//number of customers
    pEDrnks=15;//percentage energy drinkers
    pCDrnks=58;//percentage out of energy drinkers
    //process/calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks+0.5;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks+0.5;
    //output everything
    cout<<"customer survey problem"<<endl;
    cout<<"known/given values:"<<endl;
    cout<<"number of customers = "<<nCust<<endl;
    cout<<"percentage energy drinkers = "<<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"percentage citrus drinkers/energy drinkers = "
               <<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"calculated values:"<<endl;
    cout<<"number of energy drinkers = "<<nEDrnks<<endl;
    cout<<"number of citrus drinkers = "<<nCDrnks<<endl;
    //exit stage right
    return 0;
}

