/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on July 13, 2020, 12:36 PM
 * Purpose:  Rectangle
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
    unsigned length;
    char l; //letter
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
        do{
            
            cin>> length;
        }while(length>15 || length<1);
         do{
            
            cin>> l;
        }while(length>15 || l<1);
       
        // do{
            
       ///     cin>> l;
       //      if (l!='X'||l!='Y'){
       //          cin>> l};
       // }while(l!='X'||l!='Y');
       //  do{
       //     cin>> l;
       // }while(length>15 || l<1);
        
        
        
    
        
     for(unsigned x=0; x<length; x++){
            
            for(unsigned y=0; y<length; y++){
                
                cout<<l;
            }
           if (x!=length-1){
            cout<<endl;
           }
        }

    //Display the outputs

    //Exit stage right or left!
    return 0;
}