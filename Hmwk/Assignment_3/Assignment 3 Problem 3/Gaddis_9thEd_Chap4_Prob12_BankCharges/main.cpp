/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
unsigned char PERCENT = 100;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float iniBal,
          iniRate;
    char  nYears;
    //Initialize or input i.e. set variable values
    float checks, balance, fee, lFee, tFee;
     fee = 10.0;
     lFee=0.0;
    //Map inputs -> outputs
        cout << "Monthly Bank Fees\n";
        cout << "Input Current Bank Balance and Number of Checks\n";
        cin >> balance >> checks;

    //validate input immediately, and continue only if
    //input for checks number is valid
    if(checks >= 0){

       
        if (balance >= 0){
            //deduct monthly payment from balance
           

            //add extra $15 if balance falls below 400
            if(balance < 400){
                 lFee=15.0;
                tFee = fee + 15; 
            }
            //use if/else if statements to deduct payment
            //for number of checks, paying depending on number
            //of checks used
            if(checks < 20)
                checks*=0.1f;
            else if(checks < 40)
                checks*=0.08f;
            else if(checks < 60)
                checks*=0.06f;
            else if(checks >= 60)
                checks*=0.04f;

            //display message on screen displaying fees
            cout<< fixed << showpoint << setprecision(2);
            cout << "Balance     $"<< setw(9)<< balance << endl;
            cout << "Check Fee   $"<< setw(9)<< checks  << endl;
            cout << "Monthly Fee $" << setw(9) << fee<< endl;
            cout << "Low Balance $"<< setw(9) << lFee  << endl;
            balance = balance - checks - fee - lFee;
            cout << "New Balance $"<< setw(9)<< balance;
        }
        else{
            //display urgent message that account is overdrawn
            cout << "Error\n";
        }
    }
    else{
        //display message prompting that number of checks
        //can't be negative
        cout << "Input Positive numeber of checks.\n";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

