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

//user libraries

//global variables

//function prototypes

//execution begins here
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
            case 'A':
                case 'a':{
                    float one=0,ans=0;
                    cout<<"\nPlease enter a number:"<<endl;
                    cin>>one;
                    if(one>0){
                        for(int i=1; i<=one; i++){
                            ans+=i;//uses the increment i to sum all the numbers
                        }
                        cout<<"The sum of that number is "<<ans<<"\n"<<endl;
                    }
                    else
                        cout<<"The number is invalid\n"<<endl;
                    break;
                }
            case 'B':
                case 'b':{
                    float num=0,ocean=0;
                    cout<<"\nPlease enter a number of years: "<<endl;
                    cin>>num;
                    ocean=num*1.5;
                    cout<<"In "<<num<<" years, the ocean will have risen "
                            <<ocean<<" millimeters.\n"<<endl;
                    break;
                }
            case 'C':
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
            case 'D':
                case 'd':{
                    float price=2500;
                    cout<<endl;
                    for(int i=1;i<=6;i++){
                        price+=price*0.04;
                        cout<<"After "<<i<<" year(s), the price will increase "
                                "to "<< price <<endl;
                    }
                    cout<<endl;
                    break;
                }
            case 'E':
                case 'e':{
                    float speed=0,time=0;
                    cout<<"How fast is your car moving?(mph)"<<endl;
                    cin>>speed;
                    cout<<"How many hours have you been driving?"<<endl;
                    cin>>time;
                    cout<<"Hour    Distance Traveled\n~~~~~~~~~~~~~~~~~~~~~~"
                            "~~~~~~~~"<<endl;
                    for(int i=1;i<=time;i++){//this for loop just displays the outputs
                        cout<<"  "<<i<<"         "<<i*speed<<endl;
                    }
                    
                    break;
                }
            case 'F':
                case 'f':{
                    float days=0, total=0;
                    cout<<"\nPlease enter the number of days in a pay period:"
                            "\n"<<endl;
                    cin>>days;
                    cout<<"Day's Salary    Total Salary\n~~~~~~~~~~~~~~~~~~~~~~"
                            "~~~~~~~~"<<endl;
                    cout << setprecision(2) << fixed;//this allows us to format in pennies
                    for(int i= 1; i<=days; i++){//this for loop just displays the outputs
                        total+=i;
                        cout<<"      "<<i/100.0<<"         "<<total/100.0<<endl;
                    }
                    break;
                }
            case 'G':
                case 'g':{
                    char nChoice;//this is the new choice for the nested switch
                    cout<<"\nPlease enter a choice:"<<endl;
                    cout<<" a)Addition"<<endl;
                    cout<<" b)Subtraction"<<endl;
                    cout<<" c)Multiplication"<<endl;
                    cout<<" d)Division"<<endl;
                    cin>>nChoice;
                    switch(nChoice){//switch statement for second choice
                        case 'A':
                        case 'a':{//addition problem
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
                        case 'B':
                        case 'b':{//subtraction
                            unsigned seed = time(0);//gets the system time
                            srand(seed);//seed the random number generator

                            short num1, num2, min, max, sum, ans;
                            bool l=true;
                            min = 100;
                            max = 999;

                            do{
                            num1 = (rand()%(max-min+1))+min;
                            num2 = (rand()%(max-min+1))+min;
                            if(num1>num2)
                                l=false;
                            }while(l);

                            cout<<"\nwhat is "<<num1<<"\n       -"<<num2<<endl;

                            sum=num1-num2;
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
                        case 'C':
                        case 'c':{//multiplication
                            unsigned seed = time(0);//gets the system time
                            srand(seed);//seed the random number generator

                            short num1, num2, min, max, sum, ans;
                            bool l=true;
                            min = 1;
                            max = 180;

                            num1 = (rand()%(max-min+1))+min;
                            num2 = (rand()%(max-min+1))+min;

                            cout<<"\nwhat is "<<num1<<" * "<<num2<<endl;

                            sum=num1*num2;
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
                        case 'D':
                        case 'd':{//division
                            unsigned seed = time(0);//gets the system time
                            srand(seed);//seed the random number generator

                            short num1, num2, min, max, sum, ans;
                            bool l=true;
                            min = 1;
                            max = 999;

                            do{
                            num1 = (rand()%(max-min+1))+min;
                            num2 = (rand()%(max-min+1))+min;
                            if((num1>num2)&&(num1%num2==0))
                                l=false;
                            }while(l);

                            cout<<"\nwhat is "<<num1<<" / "<<num2<<endl;

                            sum=num1/num2;
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
                        default:{
                        cout<<"\nYou entered a wrong choice.\n"<<endl;
                        break;
                        }
                    }
                    break;
                }
            case 'H':
                case 'h':{
                    unsigned seed = time(0);//gets the system time
                    srand(seed);//seed the random number generator
    
                    short min, max, ans, guess;
                    bool l=true;
                    min = 100;
                    max = 999;

                    ans = (rand()%(max-min+1))+min;

                    do{
                        
                        cout<<"\nGuess the number(1-999):"<<endl;
                        cin>>guess;
                        if(guess>ans)
                            cout<<"\nToo high!"<<endl;
                        else if(guess<ans)
                            cout<<"\nToo low!"<<endl;
                        else{
                            cout<<"\nThat's it!\n"<<endl;
                            l=false;
                        }
                        
                    }while(l);
                    break;    
                }
            case 'I':
                case 'i':{
                    unsigned seed = time(0);//gets the system time
                    srand(seed);//seed the random number generator
    
                    short min, max, ans, guess,gCount=1;
                    bool l=true;
                    min = 1;
                    max = 999;

                    ans = (rand()%(max-min+1))+min;

                    do{
                        
                        cout<<"\nGuess the number(1-999):"<<endl;
                        cin>>guess;
                        if(guess>ans){
                            cout<<"\nToo high!"<<endl;
                            gCount++;
                        }else if(guess<ans){
                            cout<<"\nToo low!"<<endl;
                            gCount++;
                        }else{
                            cout<<"\nThat's it!, you guessed: "<<gCount
                                    <<" time(s)\n"<<endl;
                            l=false;
                        }
                        
                    }while(l);
                    break; 
                }
            case 'J':
                case 'j':{
                    float square;
                    cout<<"\nPlease enter the size of the square(1-15):"<<endl;
                    cin>>square;
                    for(int i = 1; i <= square; i++)
                    {
                        //cout<<"x"<<endl;
                        cout<<endl;//this will shift the loop down one line
                        for(int j = 1; j <= square; j++)//this loop prints the horizontal lines
                            cout<<"x";
                        
                    }
                    cout<<"\n"<<endl;//this just adds a line so it looks cleaner
                    break;
                }
            case 'K':
                case 'k':{
                    float floors,room,occupy,tRoom,tOccupy;
                    bool c = true;
                    cout<<"\nHow many floors does the hotel have?"<<endl;
                    cin>>floors;
                    for(int i = 1; i <=floors; i++){
                        if(i=13){
                         i++;   
                        }    
                        cout<<"How many rooms are there?, and how many of those"
                                " rooms are occupied?"<<endl;
                        cin>>tRoom>>tOccupy;
                        if(tRoom<0||tOccupy>tRoom||tOccupy<0){
                            cout<<"\nThat was an invalid input!\n"<<endl;
                            break;
                            c = false;
                        }
                        room+=tRoom;//these loops will just add the temp variable to the normal variable
                        occupy+=tOccupy;//these loops will just add the temp variable to the normal variable
                    }
                    if(c==false){
                    cout<<"The hotel has "<<room<<" room(s)."<<endl;
                    cout<<"The hotel has "<<occupy<<" occupied room(s)."<<endl;
                    cout<<"The hotel has "<<room-occupy<<" empty room(s)."<<endl;
                    cout<<"The hotel is "<<(occupy/room)*100<<"% full."<<endl;
                    }
                    break;
                }
            case 'X':
                case 'x':{
                    cout<<"\nThe (a)first problem gives you the sum of an "
                            "inputed number."<<endl;
                    cout<<"\nThe (b)second problem calculates the ocean level "
                            "after x years"<<endl;
                    cout<<"\nThe (c)third problem calculates calories"<<endl;
                    cout<<"\nThe (d)fourth problem calculates the price of a "
                            "product after a certain amount of years"<<endl;
                    cout<<"\nThe (e)fifth problem calculates the distances "
                            "traveled after a certain amount of time."<<endl;
                    cout<<"\nThe (f)sixth problem calculates the salary of x "
                            "days if the pay is in pennies."<<endl;
                    cout<<"\nThe (g)seventh problem is a more advanced math "
                            "tutor."<<endl;
                    cout<<"\nThe (h)eighth problem is a random number "
                            "game."<<endl;
                    cout<<"\nThe (i)ninth problem is an advanced random number "
                            "game."<<endl;
                    cout<<"\nThe (j)tenth problem displays a square of given "
                            "dimensions."<<endl;
                    cout<<"\nThe (k)eleventh problem calculates the occupancy "
                            "of a hotel.\n"<<endl;
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

