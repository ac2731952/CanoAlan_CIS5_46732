/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on: 7/23/2020
 * Purpose:  Name Search
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void sS(string [], int);
bool bSS(const string [], string, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int nN=20; //number of names
	string names[nN]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    sS(names, nN);

  
    string sN;
    cout << "Enter a name to search for:\n";
   
    getline(cin, sN);

    //Display Outputs
  if(bSS(names, sN, nN))
        cout << "The name was found";
    else
        cout << "The name was not found";

    //Exit stage right!
    return 0;
}

void sS(string names[], int arrS){

    int stSc, minIn;
    string minName;

    for(stSc = 0; stSc < arrS-1; stSc++){
      
        minName = names[stSc];
        minIn = stSc;
        
        for(int index = stSc+1; index < arrS; index++){
            
            if(names[index] < minName){
                
                minName = names[index];
                minIn = index;
            }
        } 
        names[minIn] = names[stSc];
        
        names[stSc] = minName;
    }
}

bool bSS(const string names[], string sN, int arrS){
   
    int first = 0, 
        last = arrS-1, 
        middle;

    while(first <= last){
       
        middle = (first + last) / 2;
        
        if(names[middle] == sN){
            return true;
        }
    
        else if(names[middle] > sN){
            last = middle - 1;
        }
       
        else if(names[middle] < sN){
            first = middle + 1;
        }
    }
   
    return false;
}