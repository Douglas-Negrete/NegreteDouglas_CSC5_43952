/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Modified on Mar 23rd, 2015
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string.h>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float problem1(float x, float y);
float problem2(float t);
short problem3();
void isPrime(int n);
float celsius(float f);
void RPSGame();
//void problem7();
//void problem8();
//void problem9();
//void problem10();

//Execution Begins Here
int main(int argc, char** argv) {
    //declare menu choice
    char choice;
    bool lchoice=true;
    //Repeat the menu
    do{
        //General Menu Format
        //Display the selection
        cout<<"\nType any letter from 'a-j' to solve a problem"<<endl;
        cout<<"Type anything else to quit with no solutions.\n"<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case 'A':
                case 'a':{
                    float x=0.0, y=0.0;
                    cout<<"\nPlease input how much an item's wholesale cost is:"<<endl;
                    cin>>x;
                    cout<<"Please input how much an item's markup percentage is:"<<endl;
                    cin>>y;
                    if(x<0||y<0){
                        cout<<"There can't be any negative numbers.\n"<<endl;
                    }
                    else{
                        cout << fixed << showpoint << setprecision(2);
                        cout<<"Your item costs "<<problem1(x,y)<<"\n"<<endl;
                    }
                    break;
                }
            case 'B':
                case 'b':{
                    float sec=0;
                    cout<<"Please input the time falling, in seconds."<<endl;
                    cin>>sec;
                    cout << fixed << showpoint << setprecision(2);
                    cout<<"The object covered "<<problem2(sec)<<" meters in that time"<<endl;
                    break;
                }
            case 'C':
                case 'c':{
                    short coin,h=0,t=0;
                    cout<<"How many times should the coin be flipped?"<<endl;
                    cin>>coin;
                    for(int i = 1; i <=coin; ++i){
                        if(problem3()==1) h++;
                        else t++;
                        cout<<problem3()<<endl;
                    }
                    cout<<"Heads= "<<h<<", tails= "<<t<<endl;
                    break;
                }
            case 'D':
                case 'd':{
                    int num = 0;
                    cout<<"\nWhat number are we testing?"<<endl;
                    cin>>num;
                    isPrime(num);
                    break;
                }
            case 'E':
                case 'e':{
                    float temp;
                    cout<<"\nWhat is the temperature in Fahrenheit?"<<endl;
                    cin>>temp;
                    cout<<"The temperature in Celsius is "<<celsius(temp)<<"\n"<<endl;
                    break;
                }
            case 'F':
                case 'f':RPSGame();break;
//            case 'G':
//                case 'g':problem7();break;
//            case 'H':
//                case 'h':problem8();break;
//            case 'I':
//                case 'i':problem9();break;
//            case 'J':
//                case 'j':problem10();break;
                default:{
                        cout<<"Exit"<<endl;
                        lchoice=false;
                }
        };
    }while(lchoice == true);
    return 0;
}

float problem1(float x,float y){
    float p;
    //cout>>"Your item costs "<<x<<", the markup is "<<y<<"%"<<endl;
    p=y/100;
    return x+(x*p);
}
float problem2(float t){
    return (1.0f/2)*9.8f*(t/60.0f)*(t/60.0f);
}
short problem3(){
//    unsigned seed = time(0);//gets the system time
//    srand(seed);//seed the random number generator
    short min, max, num;
    min = 1;
    max = 2;
    
    num = (rand()%(max-min+1))+min;
    
    return num;
}    

void isPrime(int n){
    bool chk = false;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            
            if(i*j==n){
                cout<<n<<" is not a prime number, "<<i<<" * "<<j<<" = "<<n<<endl;
                chk = true;
            }
            
        }
    }
    if(chk==false) cout<<"This is a prime number."<<endl;
}

float celsius(float f){
    float c=0;
    c=(5/9.0f)*(f-32);
    return c;
}

void RPSGame(){
    const int SIZE=80;
    char choice[SIZE];
    short min, max, num,num2;
    min = 1;
    max = 3;
    num = (rand()%(max-min+1))+min;
    cout<<"What would you like to pick?(rock,paper,scissors)"<<endl;
    cin>>choice;
    if(strcmp(choice,"rock")==0){
        num2=1;
    }else if(strcmp(choice,"paper")==0){
        num2=2;
    }else if(strcmp(choice,"scissors")==0){
        num2=3;
    }else{
        cout<<"That is not a choice."<<endl;
        return;
    }
    if(num==1&&num2==3)cout<<"Computer wins!"<<endl;
    else if(num==1&&num2==2)cout<<"You win!"<<endl;
    else if(num==1&&num2==1)RPSGame();
    else if(num==2&&num2==1)cout<<"You win!"<<endl;
    else if(num==2&&num2==3)cout<<"Computer wins!"<<endl;
    else if(num==2&&num2==2)RPSGame();
    else if(num==3&&num2==1)cout<<"You win!"<<endl;
    else if(num==3&&num2==2)cout<<"Computer wins!"<<endl;
    else if(num==3&&num2==3)RPSGame();
}

void paint(){
    float feet,price,hours;
    cout<<"How many square feet do you want to be painted?"<<endl;
    cin>>feet;
    cout<<"How much does the paint cost, per gallon?"<<endl;
    cin>>price;
    hours = 
    
}