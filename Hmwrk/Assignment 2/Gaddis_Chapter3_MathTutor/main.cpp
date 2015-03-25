/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      to make a math tutor
 * Created on March 16, 2015, 8:10 AM
 */

#include <iostream>//I/O
#include <cstdlib>//rand and srand
#include <ctime>//for the time function
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution starts here
int main(int argc, char** argv) {

    unsigned seed = time(0);//gets the system time
    srand(seed);//seed the random number generator
    
    short num1, num2, min, max, sum, ans;
    min = 100;
    max = 999;
    
    num1 = (rand()%(max-min+1))+min;
    num2 = (rand()%(max-min+1))+min;
    
    cout<<"what is "<<num1<<"\n       +"<<num2<<endl;
    
    sum=num1+num2;
    cout<<"\nWhat is the answer"<<endl;
    cout<<"\nPress Enter when you are ready to see the answer."<<endl;
    cin>>ans;
    
    if (cin.get() == '\n'){
        cout<<num1+num2;
        if(ans==sum)
            cout<<"\nYou got it right!"<<endl;
        else
            cout<<"\nsorry, that's not right."<<endl;
    }
    
    
    
    return 0;
}

