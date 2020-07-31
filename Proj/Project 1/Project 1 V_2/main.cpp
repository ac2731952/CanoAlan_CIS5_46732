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
#include <fstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int value, player; 
    string card;
    string name;
    string file;
   
    //File input/output
        srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned short vC1,vC2, vCe1, vCe2;
    unsigned char nCards,nEcards, PlayerSum, EnemySum;
    char option;
    char chance, inp1, inp2;
    int players;
    string faces;
    string names;
    ifstream fileC;
    //Initialize Variables
    nCards=13;
    nEcards; //number of enemy cards
    do{
    cout <<" Welcome to BlackJack!" << endl;
    cout<< "Would you like to read the rules?"<<endl;
    
 
                if ((option=='Y')||(option=='y')){
                 fileC.open("Project 1 Rules final.txt",ios::in); //open a file to 
            //perform read operation using file object
            if (fileC.is_open()){   //checking whether the file is open
            string tp;
            while(getline(fileC, tp)){ //read data from file object and put it into string.
            cout << tp << "\n"; //print the data of the string
            }
            fileC.close(); //close the file object.
        }
                            
            
           
        
//insert switch case here
     //or insert if else if
     //or insert decrement and nested loop or math or constant
    
 
   
           
            
    cout << "Players Cards are ";
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
    
    vCe1=rand()%nCards+1;
    do{
        vCe2=rand()%nCards+1;
    }while(vCe1==vCe2);
    //Order the first 2
    if(vCe1>vCe2){
        unsigned short temp2=vCe1;
        vCe1=vCe2;
        vCe2=temp2;
    } 
   
    if (vC1==1)cout<<"Ace ";
    if (vC1==2)cout<<"Two ";
    if (vC1==3)cout<<"Three ";
    if (vC1==4)cout<<"Four ";
    if (vC1==5)cout<<"Five ";
    if (vC1==6)cout<<"Six ";
    if (vC1==7)cout<<"Seven ";
    if (vC1==8)cout<<"Eight ";
    if (vC1==9)cout<<"Nine ";
    if (vC1==10)cout<<"Ten ";
    if (vC1==11)cout<<"Jack ";
    if (vC1==12)cout<<"Queen ";
    if (vC1==13)cout<<"King ";
    
    if (vC2==1)cout<<"and Ace";
    if (vC2==2)cout<<"and Two";
    if (vC2==3)cout<<"and Three";
    if (vC2==4)cout<<"and Four";
    if (vC2==5)cout<<"and Five";
    if (vC2==6)cout<<"and Six";
    if (vC2==7)cout<<"and Seven";
    if (vC2==8)cout<<"and Eight";
    if (vC2==9)cout<<"and Nine";
    if (vC2==10)cout<<"and Ten";
    if (vC2==11)cout<<"and Jack";
    if (vC2==12)cout<<"nd Queen";
    if (vC2==13)cout<<"and King";
  
   
    
    cout<<"\n PLay your cards?";
    do{
    cin>>option;
    
    if ((option=='Y')||(option=='y')){
             if(vCe1==13)cout<<"King";
        else if(vCe1==12)cout<<"Queen";
        else if(vCe1==11)cout<<"Jack";
        else if(vCe1==10)cout<<"Ten";
        else if(vCe1==9)cout<<"Nine";
        else if(vCe1==8)cout<<"Eight";
        else if(vCe1==7)cout<<"Seven";
        else if(vCe1==6)cout<<"Six";
        else if(vCe1==5)cout<<"Five";
        else if(vCe1==4)cout<<"Four";
        else if(vCe1==3)cout<<"Three";
        else if(vCe1==2)cout<<"Two";
        else if(vCe1==1)cout<<"One";
        
        
       
        switch(vCe2){
            case 1: cout<<"Ace";break;
            case 2: cout<<"Two";break;
            case 3: cout<<"Three";break;
            case 4: cout<<"Four";break;
            case 5: cout<<"Five";break;
            case 6: cout<<"Six";break;
            case 7: cout<<"Seven";break;
            case 8: cout<<"Eight";break;
            case 9: cout<<"Nine";break;
            case 10: cout<<"Ten";break;
            case 11: cout<<"Jack";break;
            case 12: cout<<"Queen";break;
            case 13: cout<<"King";break;
            
            
        }
        cout << "Players Cards are ";
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
             
        };
        
           PlayerSum = vC1+vC2;
    EnemySum = vCe1 + vCe2;

    if (PlayerSum == EnemySum)
        cout << "Tie";
   
    if (PlayerSum > EnemySum)
        cout << "Player Wins!";
    
    if (PlayerSum < EnemySum)
        cout << "Enemy Wins!";
    
        cout<<"\nAgain:"<<endl;
   cin>>option;
   if ((option=='Y')||(option=='y'))
    cout << endl;
    
   }while((option=='Y')||(option=='y'));
   
 
    
   
	    //Display Outputs
	   
	    
    return 0;
}

