/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 12:36 PM
 * Purpose:  Pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int col,sCol; //columns, column -1
    //Initialize or input i.e. set variable values
    cin>>col;
    sCol=col-1;
    //Map inputs -> outputs
    for(int i=1;i<=col;i++){
        for(int j=1;j<=i;j++){
            cout<<'+';
        }
        cout<<endl<<endl;
        
    }
    for(int i=1;i<=sCol;i++){
        for(int j=1;j<=col;j++){
            cout<<'+';
        }
        cout<<endl<<endl;
        col--;
    }
    cout<<"+";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
