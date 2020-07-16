/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on June 28, 2020, 7:17 PM
 * Purpose: Write a program that holds the prices of 
 * the five items in five variables
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
    float itm1, itm2, itm3, itm4, itm5, sT, tX, toT;
    //all items, subtotal, tax, and total
    //Initialize all known variables
           itm1 = 15.95f; 
           itm2 = 24.95f; 
           itm3 = 6.95f;
           itm4 = 12.95f; 
           itm5 = 3.95f; 
    //Process Inputs to Outputs -> Mapping Process
    //Maps all unknown objectives 
           sT = itm1 + itm2 + itm3 + itm4 + itm5;
           tX = 0.06 * sT;
           toT = tX + sT;
    //Display the Inputs/Outputs
    cout << "Item 1 has a price of = $" << itm1 << endl;
    cout << "Item 2 has a price of = $" << itm2 << endl;
    cout << "Item 3 has a price of = $" << itm3 << endl;
    cout << "Item 4 has a price of = $" << itm4 << endl;
    cout << "Item 5 has a price of = $" << itm5 << endl << endl;
    cout << "Subtotal = $" << sT << endl;
    cout << "Tax = $" << tX << endl;
    cout << "Total = $" << toT << endl << endl;

    //Clean Up the code, close files, deallocate memory,etc...
    //Exit stage right
    return 0;
}


