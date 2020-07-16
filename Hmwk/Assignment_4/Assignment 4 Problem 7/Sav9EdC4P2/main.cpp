/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 11:47pm
 * Purpose:  MPG 2
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
  float li1,mi1,gal1,mL1,mi2,gal2,mL2,li2;

    char ch='y';
    
    
    do
    
    {
        cout<< "Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        
        cin>>li1>>mi1;
        
        cout<<"Enter number of miles traveled:"<<endl;
        
        cin>>li2>>mi2;
        
        gal1=conv*li1;
        
        mL1=mi1/gal1;
        
        cout<<fixed<<setprecision(2);
        cout<<"miles per gallon: "<<mL1<<endl;
        cout<<endl;
        cout<< "Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        
        gal2=conv*li2;
        
        mL2=mi2/gal2;
        
        cout<<fixed<<setprecision(2);
        cout<<"miles per gallon: "<<mL2<<endl;
        
        if (mL1>mL2)
           cout<<"\nCar 1 is more fuel efficient"<<endl;
           else
           cout<<"\nCar 2 is more fuel efficient"<<endl; 
        cout<<"\nAgain:"<<endl;
        cin>>ch;
        if(ch=='y' || ch=='Y')
            cout<<endl;
    }while(ch=='y' || ch=='Y');
    
    //Display the outputs


    //Exit stage right or left!
    return 0;
}

