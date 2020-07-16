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

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string runner_1,
           runner_2,
           runner_3;

    int runner_1_time,
        runner_2_time,
        runner_3_time;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin >> runner_1 >> runner_1_time >> runner_2 >> runner_2_time >> runner_3 >> runner_3_time;

    if (runner_1_time < 0 || 
        runner_2_time < 0 || 
        runner_3_time < 0)
    {
        cout << "Error. Runner times must be\n"
             << "0 or greater.\n"
             << "Rerun the program and try again." 
             << endl;
    }
    else
    {
        if (runner_1_time > runner_2_time)
        {
            if (runner_1_time > runner_3_time)
            {
                cout << runner_1 << "\t" << setw(3)
                     << runner_1_time 
                     << endl;
                if (runner_2_time > runner_3_time)
                {
                    cout << runner_2 << "\t" << setw(3)
                         << runner_2_time 
                         << endl;
                    cout << runner_3 << "\t" << setw(3)
                         << runner_3_time 
                         << endl;
                }
                else
                {
                    cout << runner_3 << "\t" << setw(3)
                         << runner_3_time 
                         << endl;
                    cout << runner_2 << "\t" << setw(3)
                         << runner_2_time 
                         << endl;
                }
            }
        }
        if (runner_2_time > runner_3_time)
        {
            if (runner_2_time > runner_1_time)
            {
                cout << runner_2 << "\t" << setw(3)
                     << runner_2_time 
                     << endl;
                if (runner_1_time > runner_3_time)
                {
                    cout << runner_1 << "\t" << setw(3)
                         << runner_1_time 
                         << endl;
                    cout << runner_3 << "\t" << setw(3)
                         << runner_3_time 
                         << endl;
                }
                else
                {
                    cout << runner_3 << "\t" << setw(3)
                         << runner_3_time 
                         << endl;
                    cout << runner_1 << "\t" << setw(3)
                         << runner_1_time 
                         << endl;
                }
            }
        }
        if (runner_3_time > runner_2_time)
        {
            if (runner_3_time > runner_1_time)
            {
                cout << runner_3 << "\t" << setw(3)
                     << runner_3_time 
                     << endl;
                if (runner_1_time > runner_2_time)
                {
                    cout << runner_1 << "\t" << setw(3)
                         << runner_1_time 
                         << endl;
                    cout << runner_2 << "\t" << setw(3)
                         << runner_2_time 
                         << endl;
                }
                else
                {
                    cout << runner_2 << "\t" << setw(3)
                         << runner_2_time 
                         << endl;
                    cout << runner_1 << "\t" << setw(3)
                         << runner_1_time 
                         << endl;
                }
            }
        }
    }

    //Display the outputs

    //Exit stage right or left!
    return 0;
}
