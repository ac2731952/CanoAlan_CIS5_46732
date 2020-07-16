/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 28, 2020, 8:23 PM
 * Purpose: Write a program chat will 
 * compute the total sales tax
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
    float pCh,sT,cT,toT; //purchase, state tax, county tax, and total tax
    //Initialize all known variables
          pCh = 95.0f;
          sT = 0.04f;
          cT = 0.02f;
          toT = 0.0f;
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives 
    toT = (pCh * sT) + (pCh * cT);
    //Display the Inputs/Outputs
    cout << "The total sales tax on a $95 purchase is $" << toT << endl;
    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}


