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
    float bet=0,account=0,newBet=0,dpBar=0,field=0;
    int thwGame=0,maxNThw=0,nThrows=0,totGame=0;
    bool lose = false,loop=true, puck=false;//if puck is false, it means that it
                                            //is off, if it is true, then it is on
    char choice;
    //display the prompts
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Please put money in your account: "<<endl;
    cin>>account;
    do{//start of the whole loop
        cout<<"\nHow much would you like to bet on the pass line?"<<endl;
        cin>>bet;
        if(bet>account){
            cout<<"You can't bet more than you have in your account."<<endl;
            return 0;
        }
        if(puck==false){
            cout<<"\nDo you want to place a bet on the 'Don't pass bar'?(y/n)"<<endl;
                cin>>choice;
                cout;
                if((choice == 'y')){
                    cin>>dpBar;
                    if(dpBar>account){
                        cout<<"You can't bet more than you have in your account."<<endl;
                        return 0;
                    }
                    choice=' ';
                }
                else if((choice == 'n')){
                    choice=' ';
                }    
        }
        //loop throw the dice and take the stats
        do{//this is the start of a 'Game'
            int point=roll(2,6);
            nThrows++;
            cout<<"\nYou rolled a(n) "<<point<<endl;
            if(point==2||point==3||point==12){//you lost right away
                cout<<"You lost the 'Pass Line'\n"<<endl;
                account-=bet;
                bet=0;
                if(dpBar>0){
                    cout<<"You also lost the 'Don't Pass Bar'\n"<<endl;
                    account-=dpBar;
                    dpBar=0;
                }
                lose=true;
                totGame++;
            }
            else if(point==7||point==11){//you won right away
                cout<<"You won the 'Pass Line'\n"<<endl;
                if(dpBar>0){
                    cout<<"You also won the 'Don't Pass Bar'\n"<<endl;
                    account+=dpBar;
                    dpBar=0;
                }
                account+=bet;
                lose=true;
                totGame++;
            }
            else{//you have not won or lost
                //keep throwing
                bool rollAgn;
                puck=true;
                cout<<"\n"<<point<<" is the new point."<<endl;
                cout<<"\nDo you want to place a bet on the 'field'?(y/n)"<<endl;
                cin>>choice;
                cout;
                if((choice == 'y')){
                    cin>>field;
                    if(field>account){
                        cout<<"You can't bet more than you have in your account."<<endl;
                        return 0;
                    }
                    choice=' ';
                }
                else if((choice == 'n')){
                    choice=' ';
                }
                do{//if you do not win or lose right away, you go into this loop
                    cout<<"\nDo you want to place another bet?(y/n)"<<endl;
                    cin>>choice;
                    cout;
                    if((choice == 'y')){
                        cin>>newBet;
                        bet+=newBet;
                        newBet=0;
                        choice=' ';
                    }
                    else if((choice == 'n')){
                        choice=' ';
                    }
                    rollAgn=true;
                    int sum2=roll(2,6);
                    nThrows++;
                    cout<<"\nYou rolled a(n) "<<sum2<<endl;
                    if(field>0 && (sum2==3||sum2==4||sum2==9||sum2==10||sum2==11)){
                        //this are checking the field bets (3,4,9,10,11)
                        cout<<"\nYou won ("<<field<<") in the field."<<endl;
                        account+=field;
                    }
                    else if(field>0 && (sum2==2||sum2==12)){//this are checking the field bets (2,12)
                        cout<<"\nYou won 2*("<<field<<") in the field."<<endl;
                        account+=field*2;
                    }
                    if(sum2==point){//if this is true you won the game
                        cout<<"You won the 'Pass Line'!\n"<<endl;
                        field=0;
                        account+=bet;
                        if(dpBar>0){
                            cout<<"But you lost the 'Don't Pass Bar'"<<endl;
                            account-=dpBar;
                            dpBar=0;
                        }
                        rollAgn=false;
                        lose=true;
                        totGame++;
                    }
                    else if(sum2==7){//if this is true then you lost the game
                        cout<<"\nYou lost the pass line."<<endl;
                        if(field>0){
                            cout<<"\nYou also lost in the field."<<endl;
                            account-=field;
                            field=0;
                        }
                        if(dpBar>0){
                            cout<<"\nBut you won the Don't pass bar."<<endl;
                            account+=dpBar;
                            dpBar=0;
                        }
                        account-=bet;
                        rollAgn=false;
                        lose=true;
                        totGame++;
                    }
                }while(rollAgn);//this is the end of the 'didn't win or lose at first' loop
            }
        }while(lose==false);//this is the end of a game
        cout<<"\ntotal                : "<<account<<endl;
        cout<<"Number of throws     : "<<nThrows<<endl;
        if(nThrows>maxNThw){
            maxNThw=nThrows;
        }
        nThrows=0;
        cout<<"\nKeep Playing?(y/n)"<<endl;
        cin>>choice;
        if((choice == 'y')){
            loop=true;
        }
        else if((choice == 'n')){
            loop=false;
            //output wins and losses
            cout<<"\ntotal                : "<<account<<endl;
            //cout<<"Number of throws     : "<<nThrows<<endl;
            cout<<"Total number of Games: "<<totGame<<endl;
            cout<<"Max number of throws : "<<maxNThw<<endl;
        }
        
    }while(loop==true);
    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides){
    
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}