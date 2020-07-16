/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 2, 2020, 2:28 PM
 * Purpose:  Cookie
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
    float cK,sV, cL,sCL, cB; //cookies, servings, calorie, calories per serving
    //and cookies per bag
    
    //Map inputs -> outputs
    cin >> cK;
    sV = 10;
    sCL = 300; //if a bag of cookies has 40 cookies and there are 10 servings
    //then a serving is 4 cookies so each cookie is roughly 75 calories
    cB = 40;
    
    cL = cK * (sCL/(cB/sV));
    //Display the outputs
cout << "Calorie Counter"<<endl;
cout << "How many cookies did you eat?" <<endl;
cout << "You consumed " << cL << " calories.";
    //Exit stage right or left!
    return 0;
}

