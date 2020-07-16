/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 3, 2020, 8:29 AM
 * Purpose:  Sum
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
int nM;
int pSum, 
    nSum;//positive sum, negative sum, and numbers
    
    //Initialize or input i.e. set variable values
    nSum = pSum = 0;
    
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;
    
    cin>>nM;
    pSum+=nM>0?nM:0;
    nSum+=nM<0?nM:0;

    
    //Display the outputs
   
    cout<<"Negative sum =" << setw(4)<< nSum << endl;
    cout<<"Positive sum =" << setw(4)<< pSum << endl;
    cout<<"Totale sum   =" << setw(4)<< nSum + pSum;
    //Exit stage right or left!
    return 0;
}

