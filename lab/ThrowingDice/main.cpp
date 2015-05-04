/* 
 * File:   main.cpp
 * Author: douglas
 *  purpose: to throw dice
 * Created on April 29, 2015, 9:39 AM
 */

//system libs
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//user libraries

//global constants

//function prototypes
unsigned char roll(unsigned char, unsigned char);

//execution starts here
int main(int argc, char** argv) {
    //declare variables
    const int SIZE=15;//size larger than needed
    int freq[SIZE]={};//setting whole array to 0
    int nThrows=36000;//number of throws
    int sum=0;//add up all the throws
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //loop throw the dice and take the stats
    for(int r=1;r<=nThrows;r++){
        freq[roll(2,6)]++;
    }
    //print the results
    for(int value=0;value<SIZE;value++){
        sum+=freq[value];
        cout<<value<< " was thrown "<<freq[value]<<" times!"<<endl;
    }
    cout<<"The dice were thrown "<<nThrows<<" = "<<sum<<" times"<<endl;
    //exit
    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides){
    
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}