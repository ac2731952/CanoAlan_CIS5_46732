/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on 7/22/2020
 * Purpose:  Find Highest Sales
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

float getSal(string din); //collect sales function
void finHig(float sw, float nw, float se, float ne); //find max integer

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs

        float ne, se, nw, sw;
        
   ne = getSal("Northeast");
     se = getSal("Southeast");
  
   nw = getSal("Northwest");
  sw = getSal("Southwest");
  
   finHig(ne, se, nw, sw);
  
    
    //Display Outputs

    //Exit stage right!
    return 0;
}


float getSal(string din)
{
   float sales;
   cout << "Enter the sales for " << din << " division:$"<<endl;
   do{
       
       cin >> sales;
       }while (sales < 0);
           
    
   return sales;
}

void finHig(float ne, float se, float nw, float sw)
{
   float higSal = 0; //maximum sale integer
   if(sw > nw && sw > se && sw > ne)
   {
       cout << "The Southwest division had the highest sales of $";
       higSal = sw;
   }
    else if(nw > ne && nw > se && nw > sw)
   {
       cout << "The Northwest division had the highest sales of $";
       higSal = nw;
   }
   else if(se > ne && se > nw && se > sw)
   {
       cout << "The Southeast division had the highest sales of $";
       higSal = se;
   }
   else if(ne > sw && ne > nw && ne > se)
   {
       cout << "The Northeast division had the highest sales of $";
       higSal = ne;
   }
  
   cout << fixed << setprecision(2) << higSal <<showpoint;
}