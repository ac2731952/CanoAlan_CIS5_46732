/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Mango Party
 *
 * Created on July 16, 2020, 3:07 AM
 */

#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

        srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned short vC1,vC2,vC3,vC4,vC5;
    unsigned char nCards;
    
    //Initialize Variables
    nCards=52;
    vC1=rand()%nCards+1;
    //Unique Value for first 2 cards
    do{
        vC2=rand()%nCards+1;
    }while(vC1==vC2);
    //Order the first 2
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 3
    do{
        vC3=rand()%nCards+1;
    }while(vC1==vC3||vC2==vC3);
    //Order the first 3
    if(vC2>vC3){
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if(vC1>vC2){
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 4
    do{
        vC4=rand()%nCards+1;
    }while(vC1==vC4||vC2==vC4||vC3==vC4);
	    //Order the first 4
	    if(vC3>vC4){
	        unsigned short temp=vC3;
	        vC3=vC4;
	        vC4=temp;
	    }
	    if(vC2>vC3){
	        unsigned short temp=vC2;
	        vC2=vC3;
	        vC3=temp;
	    }
	    if(vC1>vC2){
	        unsigned short temp=vC1;
	        vC1=vC2;
	        vC2=temp;
	    }
	    //Unique Value for Card 5
	    do{
	        vC5=rand()%nCards+1;
	    }while(vC1==vC5||vC2==vC5||vC3==vC5||vC4==vC5);
	    //Order the first 5
	    if(vC4>vC5){
	        unsigned short temp=vC4;
	        vC4=vC5;
	        vC5=temp;
	    }
	    if(vC3>vC4){
	        unsigned short temp=vC3;
	        vC3=vC4;
	        vC4=temp;
	    }
	    if(vC2>vC3){
	        unsigned short temp=vC2;
	        vC2=vC3;
	        vC3=temp;
	    }
	    if(vC1>vC2){
	        unsigned short temp=vC1;
	        vC1=vC2;
	        vC2=temp;
	    }
	    //Display Outputs
	    cout<<setw(3)<<vC1
	        <<setw(3)<<vC2
	        <<setw(3)<<vC3
	        <<setw(3)<<vC4
	        <<setw(3)<<vC5<<endl;


    
    return 0;
}

