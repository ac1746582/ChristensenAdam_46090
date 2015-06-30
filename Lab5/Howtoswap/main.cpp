/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 29, 2015, 1:00 PM
 * Purpose: How to swap
 */

//System Libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //declare variable
    int a,b;
    int min=10, max=100;
    
    //input values for a and b
    cout<<"Input two integer values between "<<min<<" and "<<max<<endl;
    cin>>a>>b;
    
    //validate the results
    if(a>=min && a<=max && b>=min && b<=max){
        //prompt user for which swap
        cout<<"What swap would you like to choose?"<<endl;
        cout<<"Storage -> s or in-place -> i"<<endl;
        //declare the variable type
        char type;
        cin>>type;
        switch (type){
            case 's':{
                int temp=a;
                a=b;
                b=temp;
                break;
            }
            case 'i': {
                a=a^b;
                b=a^b;
                a=a^b;
                break;
                
            }   
            default:
                cout<<"You don't follow instructions"<<endl;
                cout<<"You didn't type an s or an i"<<endl;
                return 1;}
                
    }else{
        cout<<"You don't follow instructions"<<endl;
        cout<<"no swap for you"<<endl;
        return 1;
    }
    
    //output the results
    cout<<"old a = "<<b<<", new a = "<<a<<endl;
    cout<<"old b = "<<a<<", new b = "<<b<<endl;
    
    //Exit stage right!

    return 0;
}

