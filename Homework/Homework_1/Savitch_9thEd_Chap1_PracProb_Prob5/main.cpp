/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 27, 2015, 1:51 PM
 * Purpose: Homework, built upon practice problem 1
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //declare variables
    unsigned int length, width, area, perim;
    cout<<"Press return after entering a number"<<endl;
    cout<<"Units should be in meters."<<endl;
    cout<<"Enter the length of the lot: "<<endl;
    cin>>length;
    cout<<"Enter the witdh of the lot:"<<endl;
    cin>>width;
    //process input here
    area=length*width;
    perim=2*length+2*width;
    cout<<"If your length is "<<length<<" meters"<<endl;
    cout<<"and your width is "<<width<<" meters, then"<<endl;
    cout<<"the area of your lot is "<<area<<" square meters and"<<endl;
    cout<<"the perimeter of your lot is "<<perim<<" meters, therefore"<<endl;
    cout<<" the total length of fencing you need is "<<perim<<" meters."<<endl;

    return 0;
}

