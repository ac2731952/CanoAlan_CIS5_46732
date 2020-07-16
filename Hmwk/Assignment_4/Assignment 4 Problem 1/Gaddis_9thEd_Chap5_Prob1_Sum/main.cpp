/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 12:36 PM
 * Purpose:  Sum
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
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
        int user_number,
        total = 0;

   
    cin >> user_number;

    while (user_number < 0)
    {
        
        cin >> user_number; // < 0
    }

    for (int i = 1; i <= user_number; i++)
    {
        
        total += i;
       
    }

    cout << "Sum = " << total;
         
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
