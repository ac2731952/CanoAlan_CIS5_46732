/* 
 * File:   main.cpp
 * Author: Alan
 * Created on July 2, 2020, 5:42 PM
 * Purpose:  Trig
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float t, sN, cN, tN; //input angle, sin, cos, tan functions
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> t;
sN = sin(t * 3.14159 / 180.0);
cN = cos(t * 3.14159 / 180.0);
tN = tan(t * 3.14159 / 180.0);
    //Display the outputs
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cout << "sin("  << t <<") = " <<  setprecision(4) << sN << endl;
    cout << "cos("  << t <<") = " <<  setprecision(4) << cN << endl;
    cout << "tan("  << t <<") = " <<  setprecision(4) << fixed << tN;
    //Exit stage right or left!
    return 0;
}

