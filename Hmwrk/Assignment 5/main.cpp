/* 
 * File:   main.cpp
 * Author: Douglas Negrete
 * Purpose:  To incorporate the code for
 * developing a menu
 * Created on 3/25/2015
 */

#include <iostream>//input and output
#include <math.h>//allows me to use the power function
#include <cstdlib>//rand and srand
#include <ctime>//for the time function
#include <iomanip>//allows us to format the output
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Please type a letter from a-j(lowercase) for a problem,"<<endl;
        cout<<"or type 'x' to see a list of the problems."<<endl;
        cout<<"Type anything else to quit with no solutions.\n"<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //cout<<"\n"<<endl;
        //Solve a problem that has been chosen.
        switch(choice){
                case 'a':{
                    float one,ans;
                    cout<<"\nPlease enter a number:"<<endl;
                    cin>>one;
                    if(one>0){
                        for(int i=1; i<=one;i++){
                            ans+=i;
                        }
                        cout<<"The sum of that number is "<<ans<<"\n"<<endl;
                    }
                    else
                        cout<<"The number is invalid\n"<<endl;
                    break;
                }
                case 'b':{
                    float num,ocean;
                    cout<<"\nPlease enter a number of years: "<<endl;
                    cin>>num;
                    ocean=num*1.5;
                    cout<<"In "<<num<<" years, the ocean will have risen "
                            <<ocean<<" millimeters.\n"<<endl;
                    break;
                }
                case 'c':{
                    for(int i=5;i<=30;i++){
                        if(i%5==0){
                        cout<<"After "<<i<<" minutes, you will have burned "
                                <<i*3.6<<" calories"<<endl;
                        }
                    }
                    cout<<endl;
                    break;
                }
                case 'd':{
                    float price=2500;
                    for(int i=1;i<=6;i++){
                        price+=price*0.04;
                        cout<<"After "<<i<<" year(s), the price will increase "
                                "to "<< price <<endl;
                    }
                    break;
                }
                case 'e':{
                    float speed,time;
                    cout<<"How fast is your car moving?(mph)"<<endl;
                    cin>>speed;
                    cout<<"How many hours have you been driving?"<<endl;
                    cin>>time;
                    cout<<"Hour    Distance Traveled\n~~~~~~~~~~~~~~~~~~~~~~"
                            "~~~~~~~~"<<endl;
                    for(int i=1;i<=time;i++){
                        cout<<"  "<<i<<"         "<<i*speed<<endl;
                    }
                    
                    break;
                }
                case 'f':{
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
                case 'g':{
                   float seconds;
                    cout<<"\nPlease enter the number of seconds:"<<endl;
                    cin>>seconds;
                    if(seconds>=86400)
                        cout<<seconds/86400.0<<" day(s)\n"<<endl;
                    else if(seconds>=3600)
                        cout<<seconds/3600.0<<" hour(s)\n"<<endl;
                    else if(seconds>=60)
                        cout<<seconds/60.0<<" minute(s)\n"<<endl;
                    else
                        cout<<seconds<<" second(s)\n"<<endl;
                    break;
                }
                case 'h':{
                    unsigned seed = time(0);//gets the system time
                    srand(seed);//seed the random number generator
    
                    short num1, num2, min, max, sum, ans;
                    min = 100;
                    max = 999;

                    num1 = (rand()%(max-min+1))+min;
                    num2 = (rand()%(max-min+1))+min;

                    cout<<"\nwhat is "<<num1<<"\n       +"<<num2<<endl;

                    sum=num1+num2;
                    cout<<"\nWhat is the answer?"<<endl;
                    cin>>ans;

                    if (cin.get() == '\n')
                        if(ans==sum)
                            cout<<"\nYou got it right!\n"<<endl;
                        else
                            cout<<"\nSorry, that's not right, it's "
                                    <<sum<<"\n"<<endl;
                    
                    break;    
                }
                case 'i':{
                    float num;
                    cout<<"\nPlease enter the number of packages sold:"<<endl;
                    cin>>num;
                    if(num>0)
                        if(num>=100)
                            cout<<"\nThe cost is "<<(num*99)*.5<<"\n"<<endl;
                        else if(num>=50 && num<=99)
                            cout<<"\nThe cost is "<<(num*99)*.4<<"\n"<<endl;
                        else if(num>=20 && num<=49)
                            cout<<"\nThe cost is "<<(num*99)*.3<<"\n"<<endl;
                        else if(num>=10 && num<=19)
                            cout<<"\nThe cost is "<<(num*99)*.2<<"\n"<<endl;
                        else
                            cout<<"\nThe cost is "<<(num*99)<<"\n"<<endl;
                    else
                        cout<<"The number must be larger than 0."<<endl;
                    break;
                }
                case 'j':{
                    float books;
                    cout<<"\nPlease enter the number of books bought:"<<endl;
                    cin>>books;
                    if(books>=0)
                        if(books>=4)
                            cout<<"\nThe points awarded is 60\n"<<endl;
                        else if(books>=3)
                            cout<<"\nThe points awarded is 30\n"<<endl;
                        else if(books>=2)
                            cout<<"\nThe points awarded is 15\n"<<endl;
                        else if(books>=1)
                            cout<<"\nThe points awarded is 5\n"<<endl;
                        else
                            cout<<"\nThere are no points awarded\n"<<endl;
                    else
                        cout<<"You can't buy a negative number of books."<<endl;
                    break;
                }
                case 'k':{
                    float weight,dstnce,chrgs;
                    cout<<"\nPlease enter the weight of the object in kg, "
                            "then the distance to be shipped:"<<endl;
                    cin>>weight>>dstnce;
                    if((weight<0||weight>20)||(dstnce<10||dstnce>3000))
                        cout<<"The item can not be shipped.\n"<<endl;
                    else if(weight<=2)
                        if(dstnce<=500)
                            chrgs=1.10;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*1.10)+1.10;
                    else if(weight<=6)
                        if(dstnce<=500)
                            chrgs=2.20;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*2.20)+2.20;
                    else if(weight<=10)
                        if(dstnce<=500)
                            chrgs=3.75;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*3.75)+3.75;
                    else if(weight<=20)
                        if(dstnce<=500)
                            chrgs=4.80;
                        else
                            chrgs = ((static_cast<int>(dstnce)/500)*4.80)+4.80;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"The total charges are "<<chrgs<<"\n"<<endl;
                    break;
                }
                case 'x':{
                    cout<<"\nThe (a)first problem gives you the sum of an "
                            "inputed number."<<endl;
                    cout<<"\nThe (b)second problem calculates the ocean level "
                            "after x years"<<endl;
                    cout<<"\nThe (c)third problem decides if a calendar date "
                            "is magic."<<endl;
                    cout<<"\nThe (d)fourth problem decides which of two "
                            "rectangles is larger."<<endl;
                    cout<<"\nThe (e)fifth problem calculates your BMI."<<endl;
                    cout<<"\nThe (f)sixth problem calculates newtons from "
                            "mass."<<endl;
                    cout<<"\nThe (g)seventh problem calculates time from "
                            "seconds."<<endl;
                    cout<<"\nThe (h)eighth problem is a simple math "
                            "tutor."<<endl;
                    cout<<"\nThe (i)ninth problem calculates the price of a "
                            "software order."<<endl;
                    cout<<"\nThe (j)tenth problem calculates book club "
                            "points."<<endl;
                    cout<<"\nThe (k)eleventh problem calculates charges for a "
                            "shipping company.\n"<<endl;
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

