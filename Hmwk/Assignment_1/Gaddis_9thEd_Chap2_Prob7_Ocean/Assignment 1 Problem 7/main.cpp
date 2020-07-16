/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 28, 2020, 6:15 PM
 * Purpose: write a program chat displays the number of 
 * millimeters higher than the current 
 * level that the ocean's level will be in given years
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
    float crntLv, risLv; //current sea level and rising level
    //Initialize all known variables
          crntLv = 0.00f;  //start level at 0
          risLv = 1.5f;
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives 
    
    //Display the Inputs/Outputs
    cout << "The ocean's level will be " << (risLv * 5) + crntLv << " mm "
  << "higher than the current level in 5 years. \n";
    cout << "The ocean's level will be " << (risLv * 7) + crntLv << " mm "
  << "higher than the current level in 7 years.  \n";
    cout << "The ocean's level will be " << (risLv * 10) + crntLv << " mm "
  << "higher than the current level in 10 years.  \n\n";
    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}

