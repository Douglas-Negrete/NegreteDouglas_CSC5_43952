/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 *      to make a paycheck calculator (if)
 * Created on March 16, 2015, 8:10 AM
 */

#include <iostream>//I/O
#include <iomanip>//Formatting
#include <fstream>//Writing to a file
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution starts here
int main(int argc, char** argv) {
    //declare variables
    ofstream out;//output the results in a file
    float hrsWkd;//hours worked
    float payRate;//pay rate
    float oRate = 1.5f;//multiplicative factor of payRate
    float oTime = 40.0f;//where overtime begins
    float payChk;//gross pay in $'s
    //open the file
    out.open("Payroll.dat");
    //prompt the user for input
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //calculate the paycheck
    if(hrsWkd < oTime){
        payChk=payRate*hrsWkd;
    }
    if(hrsWkd >= oTime){
        payChk=payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    }
    //output the results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    cout<<"over time rate = " <<oRate<<endl;
    cout<<"overtime begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    out<<"over time rate = " <<oRate<<endl;
    out<<"overtime begins at "<<oTime<<"(hrs)"<<endl;
    out<<"Gross Pay = $"<<payChk<<endl;
    //close the file
    out.close();
    return 0;
}

