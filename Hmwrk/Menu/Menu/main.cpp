/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10 with a for-loop
 * Problem 2 -> Sum the numbers between 1 and 10 with a while-loop
 * Problem 3 -> Sum the numbers between 1 and 10 with a do-while loop
 * Created on October 13, 2011, 6:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        for(int num=1;num<=10;num++){
                        cout<<"Type "<<num<<" to solve that problem."<<endl;
                    }
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '1':{
                    float one,two;
                    cout<<"\nPlease enter two numbers"<<endl;
                    cin>>one>>two;
                    if(one>two){
                        cout<<"The first number is larger\n"<<endl;
                    }
                    else{
                        cout<<"The second number is larger\n"<<endl;
                    }
                    break;
                }
                case '2':{
                    float num;
                    cout<<"\nPlease enter a number"<<endl;
                    cin>>num;
                    if(num >= 1 && num <= 10){
                        if(num==1)
                            cout<<"I\n"<<endl;
                        else if(num==2)
                            cout<<"II\n"<<endl;
                        else if(num==3)
                            cout<<"III\n"<<endl;
                        else if(num==4)
                            cout<<"IV\n"<<endl;
                        else if(num==5)
                            cout<<"V\n"<<endl;
                        else if(num==6)
                            cout<<"VI\n"<<endl;
                        else if(num==7)
                            cout<<"VII\n"<<endl;
                        else if(num==8)
                            cout<<"VIII\n"<<endl;
                        else if(num==9)
                            cout<<"IX\n"<<endl;
                        else
                            cout<<"X\n"<<endl; 
                    }
                    else{
                        cout<<"Does not accept a number less than 1, or "
                                "greater than 10.\n"<<endl;
                    }
                    break;
                }
                case '3':{
                    int mon,day,year;
                    cout<<"\nPlease enter a date in month, day, year "
                            "format(4 12 95)."<<endl;
                    cin>>mon>>day>>year;
                    if(mon*day==year)
                    {
                        cout<<"The date is magic.\n"<<endl;
                    }
                    else
                    {
                        cout<<"The day is not magic.\n"<<endl;
                    }
                    break;
                }
                case '4':{
                    float RL1,RW1,RL2,RW2;//Rectangle length 1, width 1; Rectangle length 2, width 2
                    cout<<"\nPlease enter the dimensions of two "
                            "rectangles(Length1 Width1 Length2 Width2)."<<endl;
                    cin>>RL1>>RW1>>RL2>>RW2;
                    if((RL1*RW1)>(RL2*RW2)){
                        cout<<"The first rectangle is larger.\n"<<endl;
                    }
                    else if((RL1*RW1)<(RL2*RW2)){
                        cout<<"The second number is larger.\n"<<endl;
                    }
                    else
                        cout<<"They are the same.\n"<<endl;
                    break;
                }
                case '5':{
                    float inch,lbs,BMI;
                    cout<<"\nPlease enter your height and weight"
                            "(inches pounds)"<<endl;
                    cin>>inch>>lbs;
                    BMI=(lbs*703)/(pow(inch,2));
                    if(BMI>=18.5 && BMI<=25)
                        cout<<"You have an optimal BMI, your BMI is: "
                                <<BMI<<"\n"<<endl;
                    else if(BMI>25)
                        cout<<"You are overweight, your BMI is: "
                                <<BMI<<"\n"<<endl;
                    else
                        cout<<"You are underweight, your BMI is: "
                                <<BMI<<"\n"<<endl;
                    break;
                }
                case '6':{
                    float mass,newtons;
                    cout<<"\nPlease enter the mass of an object:\n"<<endl;
                    cin>>mass;
                    newtons=mass*9.8;
                    cout<<newtons<<" newtons"<<endl;
                    if(newtons>1000)
                        cout<<"The object is too heavy.\n"<<endl;
                    else if(newtons<10)
                        cout<<"The object is too light.\n"<<endl;
                    break;
                }
                case '7':{
                    int sum=0,num=1;
                    do{
                        sum+=num++;
                    }while(num<=10);
                    cout<<endl;
                    cout<<"Solution to 3 Do-While-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case '8':{
                    int sum=0,num=1;
                    do{
                        sum+=num++;
                    }while(num<=10);
                    cout<<endl;
                    cout<<"Solution to 3 Do-While-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case '9':{
                    int sum=0,num=1;
                    do{
                        sum+=num++;
                    }while(num<=10);
                    cout<<endl;
                    cout<<"Solution to 3 Do-While-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case '10':{
                    int sum=0,num=1;
                    do{
                        sum+=num++;
                    }while(num<=10);
                    cout<<endl;
                    cout<<"Solution to 3 Do-While-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                default:{
                        cout<<"Exit"<<endl;
                        loop=false;
                        break;
                }
        };
    }while(loop);//Upper do-while
    return 0;
}

