/* 
 * File:   main.cpp
 * Author: douglas
 *  Purpose: to create the game of mastermind
 * Created on April 29, 2015, 9:10 AM
 */

//system libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//user libraries

//global constants

//function prototypes
void mastermind();
void rules();

//execution starts here
int main(int argc, char** argv){
    char choice;
    bool loop=true;
    cout<<"Welcome to the game of Mastermind!"<<endl;
    do{
        cout<<"To play the game, press and enter 'P', to read the rules press "<<
                "and enter 'R', to exit press and enter 'Q'"<<endl;
        cin>>choice;
        switch(choice){
            case 'p': case 'P':mastermind();break;
            case 'r': case 'R':rules();break;
            case 'q': case 'Q':loop=false;break;
                    default:{
                            cout<<"I'm sorry that wasn't a valid choice."<<endl;
                    }
        };
    }while(loop==true);
    return 0;
}

void mastermind(){
    const int SIZE = 10;
    char one[SIZE]={},two[SIZE]={},three[SIZE]={},four[SIZE]={};
    int code[SIZE]={};
    cout<<"Input your color combination by typing in each color"<<endl;
    cin>>one>>two>>three>>four;
    //cout<<one<<" "<<two<<" "<<three<<" "<<four<<endl;
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //int num = rand()%8+1;
    for(int i=0;i<=3;i++){
        int num = rand()%8+1;
        if(code[0]!=num||code[1]!=num||code[2]!=num||code[3]!=num){
            code[i]=num;
        }
        else{
            int num = rand()%8+1;
            code[i]=num;
        }   
        cout<<code[i]<<endl;
    }
}

void rules(){
    cout<<"You will try to guess the pattern, in both order and color,"
            " within twelve (or ten, or eight) turns. Each guess is made by"
            " typing a color combination. Once typed, the computer provides "
            "feedback by displaying from zero to four key 'pegs' in row with "
            "the guess. A 'B' peg is displayed for each code peg from the guess"
            " which is correct in both color and position. A 'W' key peg "
            "indicates the existence of a correct color code peg placed in the "
            "wrong position."<<endl;
}

