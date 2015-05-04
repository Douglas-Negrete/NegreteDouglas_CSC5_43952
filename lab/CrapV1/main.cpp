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
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare variable
    int win=0,lose=0,nGames=1000000,nThrows=0;
    int thwGame=0,maxNThw=0;
    //loop throw the dice and take the stats
    for(int game=1;game<=nGames;game++){
        int sum=roll(2,6);
        nThrows++;
        thwGame=1;
        if(sum==2||sum==3||sum==12)lose++;
        else if(sum==7||sum==11)win++;
        else{
            //keep throwing
            bool rollAgn;
            do{
                rollAgn=true;
                int sum2=roll(2,6);
                nThrows++;
                if(sum2==sum){
                    win++;
                    rollAgn=false;
                }
                else if(sum2==7){
                    lose++;
                    rollAgn=false;
                }
                thwGame++;
            }while(rollAgn);
        }
        if(thwGame>maxNThw){maxNThw=thwGame;thwGame=0;}
    }
    //output wins and losses
    cout<<"Total number of games: "<<nGames<<endl;
    cout<<"wins                 : "<<win<<endl;
    cout<<"losses               : "<<lose<<endl;
    cout<<"total wins and losses: "<<win+lose<<endl;
    cout<<"Percentage wins      : "<<100.0f*win/nGames<<"%"<<endl;
    cout<<"Percentage losses    : "<<100.0f*lose/nGames<<"%"<<endl;
    cout<<"Number of throws     : "<<nThrows<<endl;
    cout<<"Average throws       : "<<1.0f*nThrows/nGames<<endl;
    cout<<"max number of throws : "<<maxNThw<<endl;
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