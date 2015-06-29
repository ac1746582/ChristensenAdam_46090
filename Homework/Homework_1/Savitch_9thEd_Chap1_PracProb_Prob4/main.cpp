/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 27, 2015, 1:48 PM
 * Purpose: Homework, Built upon Practice Problem 1
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //declare variables
    int numpods, peaspod, totpeas;
    cout<<"Press return after entering a number"<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>numpods;
    cout<<"Enter the numbers of peas in a pod:"<<endl;
    cin>>peaspod;
    //process input here
    totpeas=numpods+peaspod;
    cout<<"If you have "<<numpods<<" pea pods"<<endl;
    cout<<"and "<<peaspod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<totpeas<<" peas in all the pods"<<endl;

    return 0;
}

