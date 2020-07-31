/* 
 * File:   main.cpp
 * Author: Mango Party
 *
 * Created on July 17, 2020, 7:14 AM
 */

#include <cstdlib>
#include <iostream>
#include<iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

      unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
        if(number>=1&&number<=3000){
    //Process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's
        unsigned char n1000s,n100s,n10s,n1s;
        n1000s=number/1000;
        n100s=(number-n1000s*1000)/100;
        n10s=(number-n1000s*1000-n100s*100)/10;
        n1s=number%10;
        
        //Output the number of 1000's in Roman Numerals
        switch(n1000s){
            case 3:cout<<"Three Thousand "; break;
            case 2:cout<<"Two Thousand "; break;
            case 1:cout<<"One Thousand "; break;
        }
        
        //Output the number of 100's
        cout<<(n100s==9?"Nine Hundred ":
               n100s==8?"Eight Hundred ":
               n100s==7?"Seven Hundred ":
               n100s==6?"Six Hundred ":
               n100s==5?"Five Hundred ":
               n100s==4?"Four Hundred ":
               n100s==3?"Three Hundred ":
               n100s==2?"Two Hundred ":
               n100s==1?"One Hundred ":"");
        
        //Output the number of 10's
        if(n10s==9)cout<<"Ninety ";
        if(n10s==8)cout<<"Eighty ";
        if(n10s==7)cout<<"Seventy ";
        if(n10s==6)cout<<"Sixty ";
        if(n10s==5)cout<<"Fifty ";
        if(n10s==4)cout<<"Forty ";
        if(n10s==3)cout<<"Thirty ";
        if(n10s==2)cout<<"Twenty ";
        if((n10s==1)&&(n1s==9))cout<<"Nineteen";
        if((n10s==1)&&(n1s==8))cout<<"Eighteen";
        if((n10s==1)&&(n1s==7))cout<<"Seventeen";
        if((n10s==1)&&(n1s==6))cout<<"Sixteen";
        if((n10s==1)&&(n1s==5))cout<<"Fifteen";
        if((n10s==1)&&(n1s==4))cout<<"Fourteen";
        if((n10s==1)&&(n1s==3))cout<<"Thirteen";
        if((n10s==1)&&(n1s==2))cout<<"Twelve";
        if((n10s==1)&&(n1s==1))cout<<"Eleven";
        if((n10s==1)&&(n1s==0))cout<<"Ten";
        
        //Output the number of 1's
        if(n10s!=1){
        if(n1s==9)cout<<"Nine";
        else if(n1s==8)cout<<"Eight";
        else if(n1s==7)cout<<"Seven";
        else if(n1s==6)cout<<"Six";
        else if(n1s==5)cout<<"Five";
        else if(n1s==4)cout<<"Four";
        else if(n1s==3)cout<<"Three";
        else if(n1s==2)cout<<"Two";
        else if(n1s==1)cout<<"One";
        }
    //Output the check value
    }
        
        cout<<" and no/100's Dollars"<<endl;
        
    
    return 0;
}

