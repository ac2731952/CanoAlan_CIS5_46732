/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 9, 2020, 12:36 PM
 * Purpose:  Roman COnversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short nm2Cvrt;
    string roman;
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Ruman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin>>nm2Cvrt;
    
    //Map inputs -> outputs
    char n1000s=nm2Cvrt/1000;
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
    
    nm2Cvrt-=n1000s*1000;
    char n100s=nm2Cvrt/100;
    roman+=n100s==9?"CN":
           n100s==8?"DCCC":
           n100s==7?"DCC":
           n100s==5?"DC":
           n100s==4?"D":
           n100s==3?"CCC":
           n100s==2?"CC":
           n100s==1?"C":"";
    
    nm2Cvrt-=n100s*100;
    char n10s=nm2Cvrt/10;
    if(n10s==9)roman+="XC";
    else if(n10s==8)roman+="LXXX";
    else if(n10s==7)roman+="LXX";
    else if(n10s==6)roman+="LX";
    else if(n10s==5)roman+="L";
    else if(n10s==4)roman+="XL";
    else if(n10s==3)roman+="XXX";
    else if(n10s==2)roman+="XXX";
    else if(n10s==1)roman+="X";
    
    char n1s=nm2Cvrt%10;
    if(n1s==9)roman+="IX";
    if(n1s==8)roman+="VIII";
    if(n1s==7)roman+="VII";
    if(n1s==6)roman+="VI";
    if(n1s==5)roman+="V";
    if(n1s==4)roman+="IV";
    if(n1s==3)roman+="III";
    if(n1s==2)roman+="II";
    if(n1s==1)roman+="I";
    //Display the outputs
    cout<< nm2Cvrt << " is equal to "<< roman<<endl;
    //Exit stage right or left!
    return 0;
}