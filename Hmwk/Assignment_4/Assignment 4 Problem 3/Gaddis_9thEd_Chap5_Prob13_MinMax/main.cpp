/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 12:36 PM
 * Purpose:  Maximum
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
    
    //Map inputs -> outputs
    int max, min, num = 0, first = 1, sum = 0, count = 0;
   while (1)
   {
      cin >> num;
      if(num == -99){
         break;
      }
      count += 1;
      if(first == 1){
         max = num;
         min = num;
         sum = 0;
         first = 0;
      }
      if(max < num){
         max = num;
      }
      if(min > num){
         min = num;
      }
      sum += num;
   }
   cout << "Smallest number in the series is " << min << endl;
   cout << "Largest  number in the series is " << max;
  
   
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
