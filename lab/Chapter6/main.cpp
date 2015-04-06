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
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float problem1(float x, float y);
float problem2(float t);
short problem3();
void problem4();
//void problem5();
//void problem6();
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
        cout<<"Type any letter from 'a-j' to solve a problem"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            case 'A':
                case 'a':{
                    float x=0.0, y=0.0;
                    cout<<"Please input how much an item's wholesale cost is:"<<endl;
                    cin>>x;
                    cout<<"Please input how much an item's markup percentage is:"<<endl;
                    cin>>y;
                    cout << fixed << showpoint << setprecision(2);
                    cout<<"Your item costs "<<problem1(x,y)<<endl;
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
                case 'd':problem4();break;
//            case 'E':
//                case 'e':problem5();break;
//            case 'F':
//                case 'f':problem6();break;
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
    return (1.0/2)*9.8*(t/60.0)*(t/60.0);
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
void problem4(){
    //Declare Variables
    ofstream out;//Output the results in a file
    float vwdHrs;//Hours viewed (hrs)
    char package;//Package AaBbCc
    const int SIZE=40;//Max size of name = 39 characters
    char name[SIZE];//Customer Name
    float bill;//Cable Bill in $'s
    //Open the file
    out.open("Cable.dat");
    //Prompt the user for inputs
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customers name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    //Calculate the paycheck
    switch(package){
        case 'A':
        case 'a':{
            bill=9.95;
            if(vwdHrs>10)bill+=2*(vwdHrs-10);
            break;
        }
        case 'B':
        case 'b':{
            bill=14.95;
            if(vwdHrs>20)bill+=(vwdHrs-20);
            break;
        }
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }
        default:  cout<<"Wrong Package Chosen"<<endl;
    };
    //Output the results to the file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Your Cable Bill From CSC5 RCC Programming Class"<<endl;
    out<<"Customer Name: "<<name<<endl;
    out<<"Package: "<<package<<endl;
    out<<"Hours Viewed: "<<vwdHrs<<endl;
    out<<"Amount Owed: $"<<bill<<endl;
    //Close the file
    out.close();
}