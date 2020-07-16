/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 11:50pm
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    
    //Map inputs -> outputs
float previousCost,currentCost,rate, option; //past cost, current cost, inflation
   do
   {
   cout<<"Enter current price:"<<endl;
   cin>>previousCost;
   cout<<"Enter year-ago price:"<<endl;
   cin>>currentCost;
   rate = (previousCost - currentCost)/currentCost;
   cout<<fixed<<setprecision(2);
   cout<<"Inflation rate: "<<rate*100<<"%\n"<<endl;
   cout<<"Again:"<<endl;
   cin>>option;
   if ((option=='Y')||(option=='y'))
    cout << endl;
    
   }while((option=='Y')||(option=='y'));
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

