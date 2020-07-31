/* 
 * File: main.cpp
 * Author: Alan Cano
 * Created on: 7/23/2020
 * Purpose: Employee Pay
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
    const int nE = 7; //employees
    int long empId[nE]= {5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[nE];
    float pRt[nE]; //rate of pay
    float wages[nE];
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    for (int count = 0;count < nE;count++)
    {
        
        cout<< "Enter employee "<<empId[count]<<"'s pay rate:\n";
        cin>> pRt[count];
        while (pRt[count] < 6.00)
        {
            
            cin>> pRt[count];
        }
        cout<< "Enter employee "<<empId[count]<< "'s hours work:\n";
        cin>> hours[count];
        while (hours < 0)
        {
            
            cin>> hours[count];
        }
    }
    
    for (int count = 0;count < nE;count++)
    {
        wages[count]= hours[count] * pRt[count];
        
        cout<<fixed<<showpoint<<setprecision(2);
        cout<< "Employee "<<empId[count]<<"'s gross pay $"<<wages[count]<< endl;
    }
    
    
    //Display Outputs

    //Exit stage right!
    return 0;
}