/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      to make a word Game
 * Created on March 16, 2015, 8:10 AM
 */

#include <iostream>//I/O
#include <string>//strings
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution starts here
int main(int argc, char** argv) {

    string name, age, city, college, prfssn, animal, pName;
    
    cout<<"What is your name?"<<endl;
    getline(cin, name);
    cout<<"How old are you?"<<endl;
    getline(cin, age);
    cout<<"What city do you live in?"<<endl;
    getline(cin, city);
    cout<<"What college do you attend?"<<endl;
    getline(cin, college);
    cout<<"What is your profession?"<<endl;
    getline(cin, prfssn);
    cout<<"What is your favorite animal?(singular)"<<endl;
    getline(cin, animal);
    cout<<"What is should the animal's name be?"<<endl;
    getline(cin, pName);
    
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<". At "
            "the age of "<<age<<", "<<name<<" went to college at "<<college<<". "
            <<name<<" graduated and went to work as a(n) "<<prfssn<<". Then, "<<
            name<<" adopted a(n) "<<animal<<" named "<<pName<<". They both lived "
            "happily ever after!";
    
    return 0;
}

