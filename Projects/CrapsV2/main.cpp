/* 
 * File:   main.cpp
 * Author: douglas
 *  purpose: to make the game of craps
 * Created on April 29, 2015, 9:39 AM
 */

//system libs
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
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
    ofstream out;//Output the results in a file
    float bet=0,account=0,newBet=0,dpBar=0,field=0,cB=0;
    int thwGame=0,maxNThw=0,nThrows=0,totGame=0,NcB=0;
    bool lose=false,loop=true,puck=false,receipt=false;//if puck is false, it means that it
                                            //is off, if it is true, then it is on
    char choice;
    out.open("receipt.txt");
    //display the prompts
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Would you like a receipt for the game?(y/n) "<<endl;
    cin>>choice;
    if(choice=='y'){
        receipt=true;
        choice=' ';
    }
    cout<<"Please put money in your account: "<<endl;
    cin>>account;
    if(receipt==true){
        out<<"You put $"<<account<<" in your account"<<endl;
    }
    
    do{//start of the whole loop
        out<<"This is the receipt for game "<<++totGame<<endl;
        totGame--;
        cout<<"\nHow much would you like to bet on the pass line?"<<endl;
        cin>>bet;
        if(receipt==true){
           out<<"You bet "<<bet<<" on the pass line"<<endl; 
        }
        if(bet>account){
            cout<<"You can't bet more than you have in your account."<<endl;
            return 0;
        }
        if(puck==false){
            cout<<"\nDo you want to place a bet on the 'Don't pass bar'?(y/n)"<<endl;
                cin>>choice;
                if((choice == 'y')){
                    cout<<"How much?"<<endl;
                    cin>>dpBar;
                    if(receipt==true){
                        out<<"You bet "<<dpBar<<" on the Don't Pass Bar"<<endl;
                    }
                    if(dpBar>(account-bet)){
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
                if(receipt==true){
                    out<<"You lost "<<bet<<" on the pass line"<<endl;
                }
                bet=0;
                if(dpBar>0){
                    cout<<"You also lost the 'Don't Pass Bar'\n"<<endl;
                    account-=dpBar;
                    if(receipt==true){
                        out<<"You lost "<<dpBar<<" on the Don't Pass Bar"<<endl;
                    }
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
                    if(receipt==true){
                        out<<"You won "<<dpBar<<" on the don't pass bar"<<endl;
                    }
                    dpBar=0;
                }
                account+=bet;
                if(receipt==true){
                    out<<"You won "<<bet<<" on the pass line"<<endl;
                }
                lose=true;
                totGame++;
            }
            else{//you have not won or lost immediately
                //keep throwing
                bool rollAgn;
                puck=true;
                cout<<"\n"<<point<<" is the new point."<<endl;
                cout<<"\nDo you want to place a bet on the 'field'?(y/n)"<<endl;
                cin>>choice;
                cout;
                if((choice == 'y')){
                    cout<<"How much?"<<endl;
                    cin>>field;
                    if(receipt==true){
                        out<<"You bet "<<field<<" on the field"<<endl;
                    }
                    if(field>(account-dpBar-bet)){
                        cout<<"You can't bet more than you have in your account."<<endl;
                        return 0;
                    }
                    choice=' ';
                }
                else if((choice == 'n')){
                    choice=' ';
                }
                cout<<"\nDo you want to place a bet on the 'come field'?(y/n)"<<endl;
                cin>>choice;
                cout;
                if((choice == 'y')){
                    cout<<"How much?"<<endl;
                    cin>>cB;
                    if(receipt==true){
                        out<<"You bet "<<cB<<" on the come field"<<endl;
                    }
                    if(cB>(account-dpBar-bet-field)){
                        cout<<"You can't bet more than you have in your account."<<endl;
                        return 0;
                    }
                    choice=' ';
                }
                else if((choice == 'n')){
                    choice=' ';
                }
                do{//if you do not win or lose right away, you go into this loop
                    cout<<"\nDo you want to add to the pass line bet?(y/n)"<<endl;
                    cin>>choice;
                    cout;
                    if((choice == 'y')){
                        cout<<"How much?"<<endl;
                        cin>>newBet;
                        bet+=newBet;
                        if(receipt==true){
                            out<<"You brought the pass line bet up to "<<bet<<endl;
                        }
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
                        if(receipt==true){
                            out<<"You won "<<field<<" in the field"<<endl;
                        }
                    }
                    else if(field>0 && (sum2==2||sum2==12)){//this are checking the field bets (2,12)
                        cout<<"\nYou won 2*("<<field<<") in the field."<<endl;
                        account+=field*2;
                        if(receipt==true){
                            out<<"You won "<<2*field<<" in the field"<<endl;
                        }
                    }
                    
                    if(cB>0 && (sum2==2||sum2==3||sum2==12)){
                        //this are checking the come field bets (2,3,12)
                        cout<<"\nYou lost the come bet."<<endl;
                        account-=cB;
                        if(receipt==true){
                            out<<"You lost "<<cB<<" in the come field"<<endl;
                        }
                        cB=0;
                    }
                    else if(cB>0 && (sum2==7||sum2==11)){//this are checking the come field bets (7,11)
                        cout<<"\nYou won in the come bet."<<endl;
                        account+=cB;
                        if(receipt==true){
                            out<<"You won "<<cB<<" in the come field"<<endl;
                        }
                        cB=0;
                    }
                    else{
                        NcB=sum2;//if you didn't win or lose right away this sets the come bet to that number
                    }
                    
                    if(cB>0 && nThrows>2 && sum2==NcB){//check to see if you won the come bet
                        cout<<"\nYou won the come bet."<<endl;
                        account+=cB;
                        if(receipt==true){
                            out<<"You won "<<cB<<" in the come field"<<endl;
                        }
                        cB=0;
                    }
                    
                    if(sum2==point){//if this is true you won the game
                        cout<<"You won the 'Pass Line'!\n"<<endl;
                        field=0;
                        account+=bet;
                        if(receipt==true){
                            out<<"You won "<<bet<<" on the pass line"<<endl;
                        }
                        if(dpBar>0){
                            cout<<"But you lost the 'Don't Pass Bar'"<<endl;
                            account-=dpBar;
                            if(receipt==true){
                                out<<"You lost "<<dpBar<<" on the Don't Pass Bar"<<endl;
                            }
                            dpBar=0;
                        }
                        if(cB>0 && NcB!=sum2){
                            cout<<"You also lost the 'Come bet"<<endl;
                            account-=cB;
                            if(receipt==true){
                                out<<"You lost "<<cB<<" on the come field"<<endl;
                            }
                            cB=0;
                        }
                        rollAgn=false;
                        lose=true;
                        totGame++;
                    }
                    else if(sum2==7){//if this is true then you lost the game
                        cout<<"\nYou lost the pass line."<<endl;
                        if(field>0){//checking your field bet
                            cout<<"\nYou also lost in the field."<<endl;
                            account-=field;
                            if(receipt==true){
                                out<<"You lost "<<field<<" on the field"<<endl;
                            }
                            field=0;
                        }
                        if(dpBar>0){//checking the don't pass bar bet
                            cout<<"\nBut you won the Don't pass bar."<<endl;
                            account+=dpBar;
                            if(receipt==true){
                                out<<"You won "<<dpBar<<" on the Don't Pass Bar"<<endl;
                            }
                            dpBar=0;
                        }
                        if(cB>0 && NcB!=sum2){
                            cout<<"You also lost the 'Come bet"<<endl;
                            account-=cB;
                            if(receipt==true){
                                out<<"You lost "<<cB<<" on the come bet"<<endl;
                            }
                            cB=0;
                        }
                        account-=bet;
                        rollAgn=false;//ending the 'game'
                        lose=true;//exiting the game loop
                        totGame++;
                    }
                }while(rollAgn);//this is the end of the 'didn't win or lose at first' loop
            }
        }while(lose==false);//this is the end of a game
        cout<<"\ntotal                : "<<account<<endl;
        cout<<"Number of throws     : "<<nThrows<<endl;
        out<<"Your account total after this game is "<<account<<endl;
        if(nThrows>maxNThw){//this is keeping a record of the most throws in a game
            maxNThw=nThrows;
        }
        nThrows=0;//this is to clear the throws for that game
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
    //Close the file
    out.close();
    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides){
    
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}