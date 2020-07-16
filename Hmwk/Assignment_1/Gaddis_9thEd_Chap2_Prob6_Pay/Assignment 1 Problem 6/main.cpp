/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 28, 2020, 5:05 PM
 * Purpose: Write a program that calculates
 * the employee's total annual pay
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
    
    //Initialize all known variables
    float pyAmt, pyP, anPy; //payAmount, payPeriod, anuualPay
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives 
    float pyAmt = 2200.00;
    float pyP = 26;
    float anPy = pyAmt * pyP;

    //Display the Inputs/Outputs
    cout << "Employee receives $" << pyAmt << " each pay period. \n";
    cout << "Each year has " << pyP << " pay periods. \n";
    cout << "Annual pay is: $" << anPy << endl << endl;

    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}

