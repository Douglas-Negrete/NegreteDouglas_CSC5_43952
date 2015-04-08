/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 8, 2015, 9:07 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int num=0;
    bool chk=false;
    cout<<"What number are we testing?"<<endl;
    cin>>num;
    for(int i=0; i<num;i++){
        for(int j=0; j<num; j++){
            if(i*j==num){
                cout<<num<<" is not a prime number, "<<i<<" * "<<j<<" = "<<num<<endl;
                chk=true;
            }
        }
    }
    if(chk==false) cout<<num<<" is a prime number."<<endl;
    
    return 0;
}

