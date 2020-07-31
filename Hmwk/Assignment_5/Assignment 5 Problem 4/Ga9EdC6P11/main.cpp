/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Created on 7/22/2020
 * Purpose:  Average Score
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

float inVal(float); //validate input
void gtSc(float &); //grab score
void calAvg(float, float, float, float, float); //find average
float iLowt(float, float, float, float, float); //assign lowest value
float fLow(float, float, float, float, float); //search values for lowest

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    float score1, 
           score2, 
           score3, 
           score4, 
           score5;

    gtSc(score1);
    gtSc(score2);
    gtSc(score3);
    gtSc(score4);
    gtSc(score5);

    calAvg(score1, score2, score3, score4, score5);
    
    //Display Outputs

    //Exit stage right!
    return 0;
}


float inVal(float num)
{
    while(!(cin >> num) || (num < 0 || num > 100))
    {
        cout << "Error. An integer from 0-100 must be entered: ";
        cin.clear();
       
    }
    return num;
}


void gtSc(float &num)
{
    cout  << "Enter a test score:"<<endl;
    num = inVal(num);
}


void calAvg(float num1,
                 float num2,
                 float num3,
                 float num4,
                 float num5)
{
    float average,
           lowest = fLow(num1, num2, num3, num4, num5);

     if (num1 == lowest)
         average = (num2 + num3 + num4 + num5) / 4;
     else if (num2 == lowest)
         average = (num1 + num3 + num4 + num5) / 4;
     else if (num3 == lowest)
         average = (num1 + num2 + num4 + num5) / 4;
     else if (num4 == lowest)
         average = (num1 + num2 + num3 + num5) / 4;
     else if (num5 == lowest)
         average = (num1 + num2 + num3 + num4) / 4;

    cout << "The average is " << fixed << showpoint<<setprecision(1)<<average;
}


float iLow(float num1,float num2,float num3,float num4,float num5)
{
    float low; //find lowst value
    if (num1 <= num2)
    {
        if (num1 <= num3)
        {
            if (num1 <= num4)
            {
                if (num1 <= num5)
                {
                    low = num1;
                }
            }
        }
    }
    return low;
}


float fLow(float num1, 
                  float num2, 
                  float num3, 
                  float num4, 
                  float num5)
{
    float  smL; //assign value to minimal value

     smL = iLow(num1, num2, num3, num4, num5);
     smL = iLow(num2, num3, num4, num5, num1);
     smL = iLow(num3, num4, num5, num1, num2);
     smL = iLow(num4, num5, num1, num2, num3);
     smL = iLow(num5, num1, num2, num3, num4);

    return  smL;
}