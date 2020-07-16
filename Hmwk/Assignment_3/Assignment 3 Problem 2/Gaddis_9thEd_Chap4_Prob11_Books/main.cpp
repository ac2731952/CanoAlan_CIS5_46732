/* 
 * File:   main.cpp
 * Author: Alan
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Books
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
    int books_purchased;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Book Worm Points" << endl;
      cout << "Input the number of books purchased this month."<<endl;
    cin >> books_purchased;
    cout << "Books purchased =  " << books_purchased << endl;

    // Decision statement to determine points earned
    if (books_purchased == 0)
        cout << "Points earned  = 0";
    else if (books_purchased == 1)
        cout << "Points earned  = 5";
    else if (books_purchased == 2)
        cout << "Points earned  = 15";
    else if (books_purchased == 3)
        cout << "Points earned  = 30";
    else if (books_purchased >= 4)
        cout << "Points earned   = 60";
   
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
