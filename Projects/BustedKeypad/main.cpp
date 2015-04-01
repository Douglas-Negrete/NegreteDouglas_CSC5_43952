/* 
 * File:   main.cpp
 * Author: Ddouglas Negrete
 * Purpose: Busted keypad, i am hungry, find closest temp for food
 *
 * Created on April 1, 2015, 7:59 AM
 */
//system lib
#include <iostream>
using namespace std;
//user lib

//global constants

//function prototypes

//execution begins here

int main(int argc, char** argv) {

    //declare variables
    unsigned short tAbove=999,tBelow=0,temp,posSet=0;
    //prompt the user
    cout<<"Input a temp from 0 to 999"<<endl;
    cin>>temp;
    //exhaust possible temp choices
    for(int t100=0;t100<=9;t100++){
        for(int t10=0;t10<=9;t10++){
            for(int t1=0;t1<=9;t1++){
                if(t100==1||t10==1||t1==1)continue;
                if(t100==4||t10==4||t1==4)continue;
                if(t100==7||t10==7||t1==7)continue;
                posSet++;
                unsigned int tloop=t100*100+t10*10+t1;
                unsigned int tdiffA=tloop-temp;
                unsigned int tdiffB=temp-tloop;
                if((tdiffA>=0)&&(tdiffA<(tAbove-temp)))tAbove=tloop;
                if((tdiffB>=0)&&(tdiffB<(temp-tBelow)))tBelow=tloop;
            }
        }
    }
    //output the range of temp settings
    cout<<"The input temperature     = "<<temp<<" degrees."<<endl;
    cout<<"The temp on the high side = "<<tAbove<<" degrees."<<endl;
    cout<<"The temp on the low side  = "<<tBelow<<" degrees.\n"<<endl;
    cout<<"There are a total of "<<posSet<<" temperature settings."<<endl;
    //exit
    return 0;
}

