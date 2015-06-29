/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 22, 2015, 10:30 PM
 * Purpose: Homework, Read two integers and output their sum and product
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
    float num1, num2, sum, product;
    cout<<"Press enter after inputting a number.\n";
    cout<<"Enter the first number:\n";
    cin>>num1;
    cout<<"Enter the second number:\n";
    cin>>num2;
    //Process Input Here
    sum=num1+num2;
    product=num1*num2;
    //Output Unknowns Here
    cout<<"The sum of your two numbers is:"<<sum<<endl;
    cout<<"The product or your two numbers is:"<<product<<endl;
    //Exit Stage Right!
    return 0;
}