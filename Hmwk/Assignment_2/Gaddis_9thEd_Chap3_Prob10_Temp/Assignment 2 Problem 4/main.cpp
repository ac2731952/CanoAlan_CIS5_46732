/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 2, 2020, 3:48 PM
 * Purpose:  Temperature
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
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
    float iTemp, fTemp; //input farenheit, output celsius
    //Map inputs -> outputs
    cin >> iTemp;
    fTemp =  (5.0 / 9.0) * (iTemp - 32);
    //Display the outputs
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cout << setprecision(1) << fixed;
    cout <<  iTemp << " Degrees Fahrenheit = "<< fTemp << " Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}

