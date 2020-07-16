/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 28, 2020, 4:32 PM
 * Creation Purpose: Write a program that stores 
 * five values in five different variables
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
    int v1, v2, v3, v4, v5; //variables
    float sM, avG; //sum and average
    //Initialize all known variables
        v1 = 28.0f;
        v2 = 32.0f;
        v3 = 37.0f;
        v4 = 24.0f;
        v5 = 33.0f;
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives
        sM = v1 + v2 + v3+ v4 + v5;
        avG = sM/5;
    //Display the Inputs/Outputs
     cout << "Sum of " << v1 << " + " << v2 << " + " << v3
  << " + " << v4 << " + " << v5 << " = " << sM << endl;
 cout << "The average is: " << avG << endl << endl;
    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}

