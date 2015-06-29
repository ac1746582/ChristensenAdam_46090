/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 24, 2015, 12:00 PM
 * Purpose: Homework, Built upon Practice Problem 2
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout<<"Hello"<<endl;
    //declare variables
    int numpods, peaspod, totpeas;
    //numpods is nomber of pods
    //peaspod is the number of peas per pod
    //totpeas is the total amount of peas
    cout<<"Press return after entering a number"<<endl;
    cout<<"Enter the total number of peas:"<<endl;
    cin>>totpeas;
    cout<<"Enter the number of pods:"<<endl;
    cin>>numpods;
    //process input here
    peaspod=totpeas/numpods;
    cout<<"If you have "<<numpods<<" pea pods"<<endl;
    cout<<"and a total of "<<totpeas<<" peas, then"<<endl;
    cout<<"you have "<<peaspod<<" peas in each pod."<<endl;
    cout<<"Good-bye"<<endl;

    return 0;
}
