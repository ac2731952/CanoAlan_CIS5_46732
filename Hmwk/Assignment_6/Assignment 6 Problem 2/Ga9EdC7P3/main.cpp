/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on: 7/23/2020
 * Purpose:  Salsa Sales
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
     string slsNm[] = {"mild", "medium", "sweet", "hot", "zesty"};
    float sales[5];
    float totSl = 0;
     int high, low, highIn, lowIn;
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    

    for(int counter = 0; counter < 5; counter++){
        cout << "Enter the sales of " << slsNm[counter];
        cout << " salsa:$"<<endl;
        cin >> sales[counter];

        //add to accumulator
        totSl += sales[counter];
    }

    highIn = 0;
    high = sales[highIn];

    lowIn = 0;
    low = sales[lowIn];

    
    for(int counter = 0; counter < 5; counter++){
        
        if(sales[counter] > high){
            high = sales[counter]; 
            highIn = counter;
        }

        
        if(sales[counter] < low){
            low = sales[counter];
            lowIn = counter;
        }
    }

    //Display Outputs
    cout << "Type     Sales\n";

    for(int counter = 0; counter < 5; counter++){
        cout << fixed<< setprecision(2)<< setw(9)<<left<<slsNm[counter]<<"$"<<sales[counter] << endl;
    }

    cout << "Total Sales was $" << totSl << endl;
     cout << slsNm[lowIn] << " was the lowest selling product."<<endl;
    cout << slsNm[highIn] << " was the highest selling product.";
   
    //Exit stage right!
    return 0;
}