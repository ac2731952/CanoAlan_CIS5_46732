/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 26, 2020, 8:23 PM
 * Purpose: Calculate the military budget as a percentage of 
 * the federal budget
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
    float milBdgt,fedBdgt,mlPrcnt;
    //Initialize all known variables
    milBdgt=7.0e11f;    //Military Budget = 700 Billion   

    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives 
    mlPrcnt =  (milBdgt/fedBdgt)*100;
    //Display the Inputs/Outputs
    cout << "Military Budget is " << mlPrcnt << "%" << endl;
    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}


