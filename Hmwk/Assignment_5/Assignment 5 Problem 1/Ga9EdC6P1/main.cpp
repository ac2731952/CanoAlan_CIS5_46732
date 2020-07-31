/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on 7/22/2020
 * Purpose:  Markup
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

float calcRe(float, float); //calculate retail function
float inVal(float); //validate input function

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    float who, mar; //wholesale, markup
     float whoCos,marCen, //wholesale cost, markup percent
           rePr; //retail price

    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    
    cout << "Enter the wholesale cost:"<<endl;
    whoCos = inVal(who);

    cout << "Enter the markup percentage:"<<endl;
    marCen = inVal(mar) * .01;

    rePr = calcRe(whoCos, marCen);

    

    cout << setprecision(2) << fixed
    
         

         << "The retail price is $" 
         << rePr;
         
    //Display Outputs

    //Exit stage right!
    return 0;
}



float calcRe(float num1, float num2)
{
    return (num1 * num2) + num1;
}

float inVal(float num)
{
    while(!(cin >> num) || (num < 0))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}