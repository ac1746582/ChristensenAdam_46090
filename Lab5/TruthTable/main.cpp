/* 
 * File:   main.cpp
 * Author: Adam Christensen
 * Created on June 29, 2015, 12:43 PM
 * Purpose: To show the truth
 */

//System Libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//Function prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Output the heading of the table
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y ";
    cout<<"(X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //row 1 output
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //row 2 output
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //row 3 output
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;
    
    //row 4 output
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<endl;

    return 0;
}

