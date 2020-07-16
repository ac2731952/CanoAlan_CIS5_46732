/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 2, 2020, 3:08 PM
 * Purpose:  Insurance
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
    float rCost, mIns; //replacement cost and mininum insurance
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> rCost;
    mIns = rCost * 0.8;
    //Display the outputs
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cout << "You need $"<< mIns << " of insurance.";
    //Exit stage right or left!
    return 0;
}

