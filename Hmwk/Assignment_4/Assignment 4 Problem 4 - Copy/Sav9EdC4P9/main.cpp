/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 11:50pm
 * Purpose:  Max Float
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
    float x,y,z,max;
    //Map inputs -> outputs
    cin >> x >> y >> z;
    //Display the outputs
    cout << "Enter first number:" << endl;
    cout << endl;
    cout << "Enter Second number:" << endl;
    cout << endl;
    cout << "Enter third number:" << endl;
    cout << endl;
    cout << fixed << setprecision(1);
if(x >= y)
                cout<<"Largest number from two parameter function:\n" <<x<<endl;
            else{
                cout<<"Largest number from two parameter function:\n";
                cout << y <<endl; 
                }
cout << endl;
if(x>=y && x>=z)
                cout<<"Largest number from three parameter function:\n" <<x<<endl;
             if(y>=x && y>=z)
                cout<<"Largest number from three parameter function:\n"  << y<<endl;
             if(z>=x && z>=y){
                cout<<"Largest number from three parameter function:" << endl;
                cout << z <<endl;
             }


    //Exit stage right or left!
    return 0;
}
