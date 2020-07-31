/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Purpose: Project 1
 * Created on July 16, 2020, 3:07 AM
 */

#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <fstream>   //File input/output
#include <cmath>     //Math Library 
#include <vector>

using namespace std;

/*
 * Function Prototypes
 * 
 */
//void setDeck (vector <int> &cF);//card faces
void shuffle (string[], int);

int main(int argc, char** argv) {
  
    //File input/output
        srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
        
            int score, points, count; 
            string file;
            float a,b,c,pts,gam,average,avg;
            vector<string> player;
            vector<string> enemy;
            bool playWin;
            bool enemWin;
            unsigned short vC1,vC2, vCe1, vCe2;
            unsigned char nCards,nEcards, PlaySum, EnemSum; //enemy and player
            char option; 
            char chance, inp1, inp2;
            ifstream fileC; 
            int size=52;
            string deck[size];           // int crdTy[2]; //card type
            //string suits[2]; //diamond, spade, club, clover //2parallel arrays
            //1d array for 52 cards or 2d array of 13 cards with faces
            vector<int> pDf;//player deck face
            
            int EncrdTy[2]; //enemy card type
            string Ensuits[2]; //enemy diamond, spade, club, clover //2parallel arrays
            
            //array for each player
            int p; //player
            int d; //deck
    //Initialize Variables
            count =0;
    score = 0;
    nCards=13;
    nEcards=13; //number of enemy cards
    
    //setDeck(pDf);
    //cout<<pDf[0];
    //store values as integers
    
    
       for (int i =0; i<size; i++){
                switch(i%13){
                case 0:deck[i] = "A "; break;
                case 1:deck[i] = "2 ";  break;
                case 2:deck[i] = "3 ";  break;
                case 3:deck[i] = "4 ";  break;
                case 4:deck[i] = "5 ";  break;
                case 5:deck[i] = "6 ";  break;
                case 6:deck[i] = "7 ";  break;
                case 7:deck[i] = "8 ";  break;
                case 8:deck[i] = "9 ";  break;
                case 9:deck[i] = "10 ";  break;
                case 10:deck[i] = "J ";  break;
                case 11:deck[i] = "Q ";  break;
                case 12:deck[i] = "K ";  break;
                
              
                
            }
        switch(i/13){
            case 0: deck[i] += "Diamonds";break;
            case 1: deck[i] += "Clubs" ;break;
            case 2: deck[i] += "Spades" ;break;
            case 3: deck[i] += "Hearts" ;break;
        }
        //cout<<deck[i]<<endl;       
    }
    shuffle(deck, size);
    /*for(int i=0;i<size;i++){
        cout<<deck[i]<<endl;
    }*/
    player.push_back(deck[count++]);
    enemy.push_back(deck[count++]);
    
     player.push_back(deck[count++]);
     
    enemy.push_back(deck[count++]);
    cout<<"PLayer"<<player[0]<<" "<< player[1]<<endl;
    cout<<"Enemy"<<enemy[0]<<endl;
    player.clear();
    enemy.clear(); 
     player.push_back(deck[count++]);
    cout<<player[0]<<endl;
    if (count == 52){
        count=0;
      shuffle(deck, size);  
    }
    
   
    
    do{
    cout <<"Welcome to BlackJack!" << endl;
    cout<<"Would you like to read the rules? Y/N"<<endl; 
    
    //2d array 
    //1st row 1-13
    //2nd row 1-4 for faces
    
                cin>>option;
                
                if ((option=='Y')||(option=='y')){ //validating user input
                 fileC.open("Project 1 Rules V4.txt",ios::in); //open a file to 
            //perform read operation using file object
            if (fileC.is_open()){   //checking whether the file is open
            string tp;
            while(getline(fileC, tp)){ //read data from file object 
                //and put it into string.
            cout << tp << "\n"; //print the data of the string
            }
            fileC.close(); //close the file object.
        }
   } 
             

               
                    //instead of making deck, try 
                    //whenever adding in card, check enemy and player cards
                    //whenever ask for card, check cards available or check check player
                    //random value for face and deck
                //ex: diamond of five at random, check if player has it then check enemy. if neither have it, then add it
                // this only checks cards in play so its it doesnt check for too logn
                
                

             //validating user input
             
    do{
        bool playWin = false;//initialize both bools to false
        bool enemWin = false;//only switch to true if they get win condition
         cout << "Player cards are ";
    vC1=rand()%nCards+1;
    //Unique Value for first 2 cards
              
    do{
        vC2=rand()%nCards+1; //shuffle function
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
   

   

        cout<<"\nPlay your cards?";
    cin>>option;
 
    }while ((option=='N')||(option=='n'));
    if ((option=='Y')||(option=='y')){
        cout<< "Your enemy cards are: ";
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
            case 1: cout<<" and Ace";break;
            case 2: cout<<" and Two";break;
            case 3: cout<<" and Three";break;
            case 4: cout<<" and Four";break;
            case 5: cout<<" and Five";break;
            case 6: cout<<" and Six";break;
            case 7: cout<<" and Seven";break;
            case 8: cout<<" and Eight";break;
            case 9: cout<<" and Nine";break;
            case 10: cout<<" and Ten";break;
            case 11: cout<<" and Jack";break;
            case 12: cout<<" and Queen";break;
            case 13: cout<<" and King";break;
         
        }
          
        };
        
           PlaySum = vC1+vC2;
    EnemSum = vCe1 + vCe2;
    
    PlaySum <= EnemSum?enemWin=true:enemWin=false;
    
    PlaySum >= EnemSum?playWin=true:playWin=false;
     
    if(!enemWin){
        score++; 
        points = score*10;
        cout<<"\nPlayer Wins!"<<endl;
        cout << "Congrats! You have won "<< score << " time(s)" << 
        "and earned " << points << " points!" << endl;
        
    }
    else if(!playWin)cout<<"\nEnemy Wins!"<<endl;
    else cout<<"It is a Tie!" <<endl;

        cout<<"\nAgain? Y/N"<<endl; //nested loop
   cin>>option;
   if ((option=='Y')||(option=='y'))
    
    cout << endl;
   
    
   }while((option=='Y')||(option=='y'));
  /* cout << "Input three scores you earned "
           "and how many games you played"<<endl;
      cin>>a>>b>>c>>gam;
   average =(a+b+c)/gam;
   avg = pow(average, 2.0);
   
   cout << "Average success is "<< setw(8) << avg << "%";
   */
	    //Display Outputs
   
    
    return 0;
}
void shuffle (string array[], int size){ 
    for(int shuffle = 0; shuffle < 7; shuffle++){
        for(int i=0;i<size;i++){
            int random = rand()%size;
            int random2 = rand()%size;
            string temp = array[random];
            array[random]=array[random2];
            array[random2]=temp;
        }
    }
}
/*void setDeck (vector <int> &cF){
    cF.push_back(4);
} */
//vectorname.clear() can clear a vector got it