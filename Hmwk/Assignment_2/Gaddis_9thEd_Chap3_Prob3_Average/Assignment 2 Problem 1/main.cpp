/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 2,2020, 12:36 PM
 * Purpose:  Average
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
    int t1, t2, t3, t4, t5; 
    float sum, avg;
    //Map inputs -> outputs
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
    sum = t1 + t2 + t3 + t4 + t5;
    avg = sum/5.0;
    //Display the outputs
    cout << setprecision(1) << fixed << showpoint;
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = " <<avg;
    //Exit stage right or left!
    return 0;
}

