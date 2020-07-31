/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on 7/22/2020
 * Purpose:  Prime Numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool isPr (int num); //find prime function
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    int num=0;
  
cout << "Enter a number:"<<endl;
cin >> num;

if (isPr(num)==true)
cout << num << " is a prime number.";
else
cout << num << " is not a prime number.";
  
    //Display Outputs

    //Exit stage right!
    return 0;
}

bool isPr(int input)
{
    if(input<2)
    return false;
    else if (input ==2 ||input==3)
    {
        return true;
    }
    else
    {
        for(int i=3; i<input; i+=2)
        {
            if(input%i==0)
                return false;
        }
    return true;
    }
}