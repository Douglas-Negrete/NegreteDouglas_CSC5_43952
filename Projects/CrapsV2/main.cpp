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
#include <string>
#include <iomanip>
using namespace std;

//user libraries

//global constants

//function prototypes
unsigned char roll(unsigned char, unsigned char);
int craps();

//execution starts here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    craps();
    //exit
    return 0;
}

int craps(){
    //declare variable
    float bet=0,account=0;
    int thwGame=0,maxNThw=0,nThrows=0;
    bool lose = false,loop=true;
    char choice;
    //display the prompts
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Please put money in your account: "<<endl;
    cin>>account;
    do{
        cout<<"How much would you like to bet?"<<endl;
        cin>>bet;
        if(bet>account){
            cout<<"You can't bet more than you have in your account."<<endl;
            return 0;
        }
        //loop throw the dice and take the stats
        do{
            int point=roll(2,6);
            nThrows++;
            cout<<"You rolled a(n) "<<point<<endl;
            if(point==2||point==3||point==12){
                cout<<"You lost"<<endl;
                account-=bet;
                lose=true;
            }
            else if(point==7||point==11){
                cout<<"You won!"<<endl;
                account+=bet;
                lose=true;
            }
            else{
                //keep throwing
                bool rollAgn;
                cout<<"\n"<<point<<" is the new point.\n"<<endl;
                do{
                    rollAgn=true;
                    int sum2=roll(2,6);
                    nThrows++;
                    cout<<"You rolled a(n) "<<sum2<<endl;
                    if(sum2==point){
                        cout<<"You won!"<<endl;
                        account+=bet;
                        rollAgn=false;
                        lose=true;
                    }
                    else if(sum2==7){
                        cout<<"You lost"<<endl;
                        account-=bet;
                        rollAgn=false;
                        lose=true;
                    }
                }while(rollAgn);
            }
        }while(lose==false);
        cout<<"total                : "<<account<<endl;
        cout<<"Number of throws     : "<<nThrows<<endl;
        nThrows=0;
        cout<<"Keep Playing?(y/n)"<<endl;
        cin>>choice;
        if((choice == 'y')){
            loop=true;
        }
        else if((choice == 'n')){
            loop=false;
        }
    }while(loop==true);
    //output wins and losses
    cout<<"total                : "<<account<<endl;
    cout<<"Number of throws     : "<<nThrows<<endl;
    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides){
    
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}