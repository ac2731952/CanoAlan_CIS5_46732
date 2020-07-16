/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on: July 13, 2020, 11:47pm
 * Purpose:  MPG
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
float const conv=0.264179;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
  float li,mi,gal,mL; //liters, miles, gallons, mileage

    char ch='y';
    
    do
    
    {
    
        cout<<"Enter number of liters of gasoline:"<<endl;
        
        cin>>li;
        
        cout<<"\nEnter number of miles traveled:"<<endl;
        
        cin>>mi;
        
        gal=conv*li;
        
        mL=mi/gal;
        
        cout<<"\nmiles per gallon:"<<endl;
        cout<<fixed<<setprecision(2);
        cout<<mL<<endl;
        
        cout<<"Again:"<<endl;
    
        
        cin>>ch;
        if(ch=='y' || ch=='Y')
            cout<<endl;
    }while(ch=='y' || ch=='Y');
    //Display the outputs

    //Exit stage right or left!
    return 0;
}