/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 23, 2015, 9:43 PM
 * Purpose:Homework, built upon practice problem 1
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    cout<<"Hello"<<endl;
    //declare variables
    int numpods, peaspod, totpeas;
    cout<<"Press return after entering a number"<<endl;
    cout<<"Enter the number of pods:"<<endl;
    cin>>numpods;
    cout<<"Enter the numbers of peas in a pod:"<<endl;
    cin>>peaspod;
    //process input here
    totpeas=numpods*peaspod;
    cout<<"If you have "<<numpods<<" pea pods"<<endl;
    cout<<"and "<<peaspod<<" peas in each pod, then"<<endl;
    cout<<"you have "<<totpeas<<" peas in all the pods"<<endl;
    cout<<"Good-bye"<<endl;

    return 0;
}

