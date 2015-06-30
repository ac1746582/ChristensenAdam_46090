/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 30, 2015, 12:16 PM
 * Purpose: Homework, Programming Project 13
 */

//System Libraries
#include <fstream>//Redo where you input all your info
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    unsigned short wtlbs, htinch, age, bmr;
    unsigned char chocbar, calchoc=230;
    char sex;
    ifstream input;
    
    //loop as long as we have data
    input.open("bmr.dat");
    while(input>>sex>>wtlbs>>htinch>>age){
        if(sex=='F'){
            bmr=655+4.3*wtlbs+4.7*htinch-4.7*age;
        }else{
            bmr=66+6.3*wtlbs+12.9*htinch-6.8*age;
        }
        chocbar=bmr/calchoc;
        //output the results
        cout<<"Sex = "<<sex<<endl;
        cout<<"Wt  = "<<wtlbs<<"(lbs)"<<endl;
        cout<<"Ht  = "<<htinch<<"(inches)"<<endl;
        cout<<"Age = "<<age<<"(years)"<<endl;
        cout<<"Your BMR = "<<bmr<<"(Cal)"<<endl;
        cout<<"Number of chocolate bars you may consume = "<<static_cast<int>(chocbar)<<endl;
        cout<<endl<<endl;
        
    }
   
    //Exit Stage Right!
    
    return 0;
}