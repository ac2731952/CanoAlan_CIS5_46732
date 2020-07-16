/* 
 * File:   main.cpp
 * Author: Alan
 * Created on July 2, 2020, 8:19 PM
 * Purpose: Paycheck
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pyChk, //paycheck
          pyRt, //pay rate
          ovRt; //overtime rate
    int   hrs, //hours worked
          ovTm; //overtime hours
    
    //Initialize or input i.e. set variable values
    ovTm = 40;
    ovRt = 2;
    //Map inputs -> outputs
    cin >>pyRt>> hrs;
    
    pyChk = hrs*pyRt;
    pyChk = ((hrs>ovTm) ? 
    ovTm * pyRt + ovRt *pyRt * (hrs-ovTm) :
    hrs*pyRt);
    //Display the outputs
cout << "This program calculates the gross paycheck." << endl;
cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
cout << "Paycheck = $ " << setprecision(2) << fixed << pyChk;
    //Exit stage right or left!
    return 0;
}

