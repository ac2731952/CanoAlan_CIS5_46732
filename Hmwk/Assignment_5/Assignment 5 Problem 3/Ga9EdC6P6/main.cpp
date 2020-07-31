/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on 7/22/2020
 * Purpose:  Kinetic Energy
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

float inVal(float); //validate input
float kinEn(float, float); //kinetic energy function
void disIn(float, float, float); //display info


//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    float kE, mass, vel; //kinetic energy, mass , velocity

    cout << "Enter the object's mass:"<<endl;
    mass = inVal(mass);

    cout << "Enter the object's velocity:"<<endl;
    vel = inVal(vel);

	kE = kinEn(mass, vel);

	disIn(mass, vel, kE);
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

 
float inVal(float num)
{
    while(!(cin >> num))
    {
        cout << "Error. A number must be entered. Try again: ";
        cin.clear();

    }
    return num;
}

