/* 
 * File: main.cpp  
 * Author: Alan Cano
 * Created on: 7/23/2020
 * Purpose: Lottery Binary
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
bool isFound(const int [], int, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
     int wN;
    //Initialize Variables
     int pN[10] = {13579, 26791, 26792, 33445, 55555,
                             62483, 77777, 79422, 85647, 93121};

    //Process or map Inputs to Outputs
    
    cout << "Enter the winning number:\n";
    cin >> wN;

    if(isFound(pN, 10, wN))
        cout << "Congratulations you have won!";
    else
        cout << "No winning numbers.";
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

bool isFound(const int numbers[], int arrS, int wN){
   
    int first = 0, 
        last = arrS-1, 
        middle;

    while(first <= last){
        
        middle = (first + last) / 2;
       
        if(numbers[middle] == wN){
            return true;
        }
        
        else if(numbers[middle] > wN){
            last = middle - 1;
        }
      
        else if(numbers[middle] < wN){
            first = middle + 1;
        }
    }
  
    return false;
}