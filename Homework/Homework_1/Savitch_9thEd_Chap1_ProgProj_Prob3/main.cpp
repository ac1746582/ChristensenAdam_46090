/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 23, 2015, 12:45 PM
 * Purpose: Homework, Counting money
 */

//System Libraries
#include <iostream> //File I/O
 
using namespace std; //std namespace -> iostream
 
//User Libraries
 
//Global Constants

//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float nickel, dimes, quart, penn;//quart is quarters, penn is pennies
    cout<<"Press enter after inputting a number."<<endl;
    cout<<"Enter the number of quarters:"<<endl;
    cin>>quart;
    cout<<"Enter the number of dimes:"<<endl;
    cin>>dimes;
    cout<<"Enter the number of nickels:"<<endl;
    cin>>nickel;
    //Process Input Here
    penn=quart*25+dimes*10+nickel*5;
    //Output Unknowns Here
    cout<<"The number of pennies you have are:"<<penn<<endl;
    //Exit Stage Right!
    return 0;
}