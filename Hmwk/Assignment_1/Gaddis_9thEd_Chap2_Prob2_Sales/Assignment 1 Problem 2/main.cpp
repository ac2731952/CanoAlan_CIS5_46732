/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 27, 2020, 1:21 AM
 * Purpose: Write a program that will predict how much the East Coast division
will generate 
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
    float toT, eCS;
    //Initialize all known variables
          toT = 8.6f;
    //Process Inputs to Outputs -> Mapping Process
    eCS = 0.58 * toT;
    //Maps all unknown objectives 
    
    //Display the Inputs/Outputs
    cout << "The East Coast Sales will generate " << eCS << " millions of dollars";
    
    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}

