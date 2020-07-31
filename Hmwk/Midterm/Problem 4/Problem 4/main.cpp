/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours;

    //Input or initialize values Here
    cout << "ISP charges for service delivered." << endl;
    cout << "Input package A,B,C then hours used for the month" << endl;
    cin >> package>>hours;



    //Basic Charges

    float charges_a = 16.99;

    if (hours <= 10)

        charges_a += 0;

    else if (hours <= 20)

        charges_a += (hours - 10)*0.95;

    else

        charges_a += (10 * 0.95)+((hours - 20)*0.85);

    float charges_b = 26.99;

    if (hours <= 20)

        charges_b += 0;

    else if (hours <= 30)

        charges_b += (hours - 20)*0.74;

    else

        charges_b += (10 * 0.74)+((hours - 30)*0.64);

    float charges_c = 36.99;

    if (hours > 30)

        charges_c += 0;


    cout << setprecision(2) << fixed;

    //Output the Charge



    if (package == 'a' || package == 'A') {

        cout << "$" << charges_a;

        if (charges_c < charges_b && charges_c < charges_b) {

            cout << " C $" << (charges_a - charges_c) << endl;

        }
        else if (charges_b < charges_a) {

            cout << " B $" << (charges_b - charges_a) << endl;

        }
        else {

            cout << " A $" << (charges_a - charges_a) << endl;

        }

    }
    else if (package == 'b'||package=='B') {

        cout << "$" << charges_b;

        if (charges_c < charges_a && charges_c < charges_b) {

            cout << " C $" << (charges_b - charges_c) << endl;

        }
        else if (charges_a < charges_b) {

            cout << " A $" << (charges_b - charges_a) << endl;

        }
        else {

            cout << " B $" << (charges_b - charges_b) << endl;

        }

    }
    else {

        cout << "$" << charges_c;

        if (charges_c > charges_a && charges_c > charges_b) {

            cout << " B $" << (charges_c - charges_b) << endl;

        }
        else if (charges_c > charges_a) {

            cout << " A $" << (charges_c - charges_a) << endl;

        }
        else {

            cout << " C $" << (charges_c - charges_c) << endl;

        }

    }

    //Basic Charges


    //Output the Charge


    //Output the cheapest package and the savings


    //Exit
    return 0;
}

