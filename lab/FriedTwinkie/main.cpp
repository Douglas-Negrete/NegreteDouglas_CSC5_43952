/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *Purpose: to design a fried twinkie machine interface
 * Created on April 8, 2015, 7:53 AM
 */

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
//user libs

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    const int SIZE=80;
    char input[SIZE];
    unsigned short totChng=0,cTwnke=350,num=0;
    char nQtrs,nDimes,nNikels;
    //prompt the user for input
    cout<<"This is a Fried Twinkie Machine"<<endl;
    cout<<"Fried Twinkies cost $3.50"<<endl;
    cout<<"How many twinkies do you want?"<<endl;
    cin>>num;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your total cost is $"<<3.50f*num<<endl;
    cout<<"Input your change as "<<endl;
    cout<<"Dollar, Quarter, Dime, Nickels"<<endl;
    do{
        cout<<"Input coins/change"<<endl;
        cin>>input;
        if(strcmp(input,"Dollar")==0||strcmp(input,"dollar")==0){
            totChng+=100;
        }else if(strcmp(input,"Quarter")==0||strcmp(input,"quarter")==0){
            totChng+=25;
        }else if(strcmp(input,"Dime")==0||strcmp(input,"dime")==0){
            totChng+=10;
        }else if(strcmp(input,"Nickel")==0||strcmp(input,"nickel")==0){
            totChng+=5;
        }else{
            cout<<"No slugs allowed"<<endl;
        }
        cout<<"Total Change = $"<<totChng/100.0f<<endl;
    }while(totChng<cTwnke*num);
    //give twinkie
    cout<<endl<<"Here is your Fried Twinkie"<<endl;
    //calculate the change
    totChng-=cTwnke*num;
    cout<<"your change is = $"<<totChng/100.0f<<endl;
    //how many quarters
    nQtrs=totChng/25;
    if(nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarters change"<<endl;
    //how many dimes
    totChng-=nQtrs*25;
    nDimes=totChng/10;
    if(nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes Change"<<endl;
    //how many nickels
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if(nNikels>0)cout<<static_cast<int>(nNikels)<<" Nickels Change"<<endl;
    //exit
    return 0;
}

