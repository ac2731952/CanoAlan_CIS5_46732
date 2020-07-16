/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 12:36 PM
 * Purpose:  Pay in Pennies
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
    int days, payDay, paySum;
    //Initialize or input i.e. set variable values
    cin>>days;
    payDay=1;
    paySum=payDay;
    //Map inputs -> outputs
    for(int day=2;day<=days;day++){
        payDay*=2;
        paySum+=payDay;
    }
    //Display the outputs
int dollars = paySum/100;
int pennies = paySum%100;
cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"")<<pennies;
    //Exit stage right or left!
    return 0;
}

