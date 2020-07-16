/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    string n1, n2, n3;
    
    getline(cin, n1);
    
    getline(cin, n2);
    
    getline(cin, n3);
    
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    //Map inputs -> outputs
      if (n1 <= n2 && n1 <= n3 && n2 <= n3) {
        cout << n1 << "\n" << n2 << "\n" << n3;
    } else if (n1 <= n2 && n1 <= n3 && n3 <= n2) {
        cout << n1 << "\n" << n3 << "\n" << n2;
    } else if (n2 <= n1 && n2 <= n3 && n1 <= n3) {
        cout << n2 << " \n" << n1 << "\n" << n3;
    } else if (n2 <= n1 && n2 <= n3 && n3 <= n1) {
        cout << n2 << "\n" << n3 << "\n" << n1;
    } else if (n3 <= n1 && n3 <= n2 && n1 <= n2) {
        cout << n3 << "\n" << n1 << "\n" << n2;
    } else {
        cout << n3 << "\n" << n2 << "\n" << n1;
    }
    //Display the outputs


    //Exit stage right or left!
    return 0;
}