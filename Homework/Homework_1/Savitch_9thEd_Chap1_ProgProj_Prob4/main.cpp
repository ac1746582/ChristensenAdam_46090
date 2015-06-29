/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 23, 2015, 12:06 PM
 * Purpose: Homework, Free Fall
 */

//System Libraries
#include <iostream> //File I/O
 
using namespace std; //std namespace -> iostream
 
//User Libraries
 
//Global Constants
const float GRAVITY=32.174f;//Acceleration due to gravity (ft/s^2)
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables Here
    float dist, time;//dist is distance (ft), time is in (s)
    //input the time
    cout<<"To calculate the distance dropped"<<endl;
    cout<<"Input the time in seconds"<<endl;
    cout<<"Time should be floating point format"<<endl;
    cin>>time;
    //calculate the free fall distance
    dist=1.0f/2*GRAVITY*time*time;
    //output the results
    cout<<"The distance travelled = ";
    cout<<dist<<"(ft)"<<endl;
    
    //Exit Stage Right!
    return 0;
}

