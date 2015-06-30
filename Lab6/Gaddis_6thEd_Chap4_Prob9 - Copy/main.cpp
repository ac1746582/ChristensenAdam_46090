/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 30, 2015, 12:57 PM
 * Purpose: Lab 6 gaddis book
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables Here
    unsigned short op1, op2, result;
    bool doagain;  
    
    //loop based upon continuing to play with the math tutor
    do{
        //determine op1/op2
        op1=rand()%900+100;
        op2=rand()%900+100;
        //display the prob
        cout<<setw(6)<<op1<<endl;
        cout<<" + "<<op2<<endl;
        cout<<"------"<<endl;
        //input value for the sum
        cin>>result;
        //if correct output congrats else try again
        if(result==op1+op2){
            cout<<"Congratulations!"<<endl;
        }else{
            cout<<"Wrong Answer"<<endl;
            cout<<"The answer was = "<<op1+op2<<endl;
        }
        //prompt if would like to cont
        cout<<"Would you like to continue? y/n"<<endl;
        char response;
        cin>>response;
        if(response=='y')doagain=true;
        else doagain=false;
     
    }while(doagain);

   
    //Exit Stage Right!
    
    return 0;
}