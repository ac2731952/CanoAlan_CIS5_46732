/* 
 * File:   main.cpp
 * Author: ALan Cano
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Astrology
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
    string s1, s2;
    
    //Initialize or input i.e. set variable values
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> s1 >> s2;
    //Map inputs -> outputs
    if(s1=="Taurus"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";  
        }else if(s2=="Virgo"){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";
        }else if(s2=="Capricorn"){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";
        }
    }else if(s1=="Virgo"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";  
        }else if(s2=="Taurus"){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";
        }else if(s2=="Capricorn"){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";
        }
    }else if(s1=="Capricorn"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";  
        }else if(s2=="Virgo"){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";
        }else if(s2=="Taurus"){
             cout<<s1<<" and " <<s2<<" are compatible Earth signs.";
        }
    }
    
    if(s1=="Gemini"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";  
        }else if(s2=="Libra"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }else if(s2=="Aquarius"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }
    }else if(s1=="Libra"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";  
        }else if(s2=="Gemini"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }else if(s2=="Aquarius"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }
    }else if(s1=="Aquarius"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";  
        }else if(s2=="Gemini"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }else if(s2=="Libra"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }
    }
    
     if(s1=="Aries"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";  
        }else if(s2=="Leo"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }else if(s2=="Sagitarius"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }
    }else if(s1=="Sagitarius"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";  
        }else if(s2=="Leo"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }else if(s2=="Aries"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }
    }else if(s1=="Leo"){
        if (s2==s1){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";  
        }else if(s2=="Sagitarius"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }else if(s2=="Aries"){
             cout<<s1<<" and " <<s2<<" are compatible Air signs.";
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
