/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 28, 2020, 10:32 PM
 * Purpose: Write a program that calculates the number 
 * of miles per gallon the car gets
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants Only
//Well known Science, Mathematical, and Laboratory COnstants only

//Function Prototypes

//Execution of code begins here
int main(int argc, char** argv) {
    //Set the random number seed here
    
    //Declare all variables for this function
    float gal, mi, MPG;
    //Initialize all known variables
     gal = 15f, mi = 375f;
     
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives 
    MPG = mi/gal;
    //Display the Inputs/Outputs
 cout << "A car with " << gal << " gallons of gasoline going"
  << mi << " miles before refueling"
  << "gets " << MPG << " MPG";

    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}


