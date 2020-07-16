/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 27, 2020, 3:49 AM
 * Creation Purpose: Write a program that computes 
 * the tax and tip on a restaurant bill 
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
    float tX, tP, toT, mlCo; //tax, tip, total, meal cost
    //Initialize all known variables
          mlCo = 88.67f;
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives 
    tX = 0.0675 * mlCo;
    tP = 0.2 * (mlCo + tX);
    toT = mlCo + tX + tP;
    //Display the Inputs/Outputs
    cout << "Meal Cost is $" << mlCo << endl;
    cout << "Tax amount is $" << tX << endl;
    cout << "Tip amount is $" << tP << endl;
    cout << "Total Bill is $" << toT << endl;
    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}


