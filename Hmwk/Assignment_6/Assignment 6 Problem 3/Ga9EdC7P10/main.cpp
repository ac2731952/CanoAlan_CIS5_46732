/* 
 * File:  main.cpp 
 * Author: Alan Cano
 * Created on: 7/23/2020
 * Purpose:  Correct Answers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

  int nM(char ans[],const char corR[], 
                   const int SIZE);
    void pW(char ans[],const char corR[], 
                   const int SIZE);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    const int SIZE = 20;
        const char corR[SIZE] = {
            'A','D','B','B','C',
            'B','A','B','C','D',
            'A','C','D','B','D',
            'C','C','A','D','B'
        };
        
        char ans[SIZE];
        int result,unresult;
       
        cout<<"Enter the student's test answers:\n";
        for(int i=0; i < SIZE; i++){
            
            cin>>ans[i];
            
           
            while ( ans[i]<'A' || ans[i]>'D'){ 
                cout<<"Answers are only A, B, C, or D.\n";
                cout<<"Your choice: ";
                cin>>ans[i];
            }
            
            
        }
        
        
        result = nM(ans,corR,SIZE);
        unresult = SIZE-result;
        
       //Display Outputs
        if(result >= 15){
            cout<<"The student passed.\n";
        }else{
            cout<<"The student failed.\n";
        }
        
        cout<<"There were "<<result<<" correct answers."<<endl;
        cout<<"There were "<<unresult<<" incorrect answers."<<endl;
        if(result < 20){
            
            cout<<"Incorrect questions:\n";
            pW(ans,corR,SIZE);
        }else{
            cout<<"No incorrect questions found.\n";
        }
       
    //Exit stage right!
    return 0;
}


int nM(char ans[],const char corR[], 
                   const int SIZE){
        
    
        int correct = 0;
        
        for(int i=0; i<SIZE; i++){
            
            if( ans[i] == corR[i] ){
                correct++;
            }
        }
        
        return correct;
    }
    
    void pW(char ans[],const char corR[],
                   const int SIZE){
        
        for(int i=0; i<SIZE; i++){
            
            if( ans[i] != corR[i] ){
                cout<<i+1<<endl;
            }
        }
    }