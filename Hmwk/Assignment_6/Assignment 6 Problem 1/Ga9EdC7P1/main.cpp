/* 
 * File: main.cpp
 * Author: Alan Cano
 * Created on: 7/23/2020
 * Purpose:  Largest Array
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
   int num[10];
    int low, high;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    cout << "Enter 10 integers:"<<endl;
    for(int i = 0; i < 10; i++){
        
        cin >> num[i];
    }

    low = num[0];
    high = num[0];

    
    for(int i = 0; i < 10; i++){
        //update lowest
        if(num[i] < low)
            low = num[i];

        //update highest
        if(num[i] > high)
            high = num[i];
    }

    //Display Outputs
cout << high << " is the highest number." <<endl;
    cout << low << " is the lowest number.";
    //Exit stage right!
    return 0;
}
