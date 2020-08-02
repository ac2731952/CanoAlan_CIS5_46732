/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Alan Cano
 * Purpose: Project 2
 * Created on 8/1/ 2020, 3:07 AM
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
 *
 * 
 */
//Function Prototypes
void shuffle (string[], int); //pass by value
void cheat();
bool chkWin(vector <string>,int, vector <string>,int ); //checkWin


int main(int argc, char** argv) {
  
    //File input/output
        srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
        
            int score, 
                points, 
                count, 
                eScore, 
                epoint,
                pHs, //playerhand size
                eHs; //enemy hand size
            string file;
            float a,b,c,pts,gam,average,avg;
            vector<string> player;
            vector<string> enemy;
            bool playWin;
            bool enemWin;
            bool answer;
            unsigned short vC1,vC2, vCe1, vCe2;
            unsigned char nCards,nEcards, PlaySum, EnemSum; //enemy and player
            char option; 
            char chance, inp1, inp2;
            ifstream fileC; 
            int size=52; //default argument
            string deck[size];           // int crdTy[2]; //card type
            
            vector<int> pDf;//player deck face
            
            int EncrdTy[2]; //enemy card type
            string Ensuits[2]; //enemy diamond, spade, club, clover //2parallel arrays
            
            //array for each player
            int p; //player
            int d; //deck
    //Initialize Variables
    count =0; 
    score = 0;
    nCards=13; //default argument
    nEcards=13; //number of enemy cards
    pHs = 0;
    eHs = 0;
   
    
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
                case 10:deck[i] = "J ";  break; //1d array
                case 11:deck[i] = "Q ";  break;
                case 12:deck[i] = "K ";  break;
              
            }
        switch(i/13){
            case 0: deck[i] += "Diamonds";break;
            case 1: deck[i] += "Clubs" ;break; //parallel array (for now)
            case 2: deck[i] += "Spades" ;break; 
            case 3: deck[i] += "Hearts" ;break; 
        }
             
    }
    shuffle(deck, size);
   
    do{
    cout <<"Welcome to BlackJack!" << endl;
    cout<<"Would you like to read the rules? Y/N"<<endl; 
    
  
                cin>>option;
                
                if ((option=='Y')||(option=='y')){ //validating user input
                 fileC.open("Project 2 Rules V5.txt",ios::in); //open a file to 
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
                cout<<"Would you like to cheat?"<<endl;
   cin>>option;
                        if ((option=='Y')||(option=='y')){
                            cheat();
                            return 0;
                        }
               
             //validating user input
    player.push_back(deck[count++]); //stl vector
    enemy.push_back(deck[count++]);
   
    enemy.push_back(deck[count++]); 
    pHs=1;
    eHs=2;
    do{
        
        player.push_back(deck[count++]);
        pHs++;
        bool playWin = false;//initialize both bools to false
        bool enemWin = false;//only switch to true if they get win condition
         cout << "Player cards are ";
         
         for(vector<string>::iterator it=player.begin();it<player.end();it++){
             cout<<*it<<" ";
         }
         cout<<endl;
    cout<<"Enemy cards are :"<<endl;
     for(vector<string>::iterator it=enemy.begin();it<(enemy.end()-1);it++){
             cout<<*it<<" ";
        } 
    
    cout<<endl;
     player.push_back(deck[count++]);
    if (count == 52){
        count=0;
      shuffle(deck, size);  
    }
   
        cout<<"\nGet other cards? Y/N";
    cin>>option;
 
    }while ((option=='Y')||(option=='y'));
    cout<< "Enemy Cards are "<<endl;
    for(vector<string>::iterator it=enemy.begin();it<(enemy.end());it++){ //hidden enemy card
             cout<<*it<<" ";
        } 
    
    enemWin=chkWin(player,pHs,enemy,eHs);
    playWin=!chkWin(player,pHs,enemy,eHs);
    if(!enemWin){
        score++;
        points = pow(2,score);
        cout<<"\nPlayer Wins!"<<endl;
        cout << "Congrats! You have won "<< score << " time(s) " << 
        "and earned " << points << " points!" << endl;
        
    }
    else if(!playWin){
        eScore++;
        epoint = pow(2,eScore);
        cout<<"\nEnemy Wins!"<<endl;
        cout<<"Apologies. You have lost " << eScore << " times(s) "<<
       "and lost "<<epoint << " points!" <<endl;
    }
    else cout<<"It is a Tie!" <<endl;

        cout<<"\nAgain? Y/N"<<endl; //nested loop
   cin>>option;
   if ((option=='Y')||(option=='y'))
    
    cout << endl;
   
    
   }while((option=='Y')||(option=='y'));
  
	    //Display Outputs
   
    
    return 0;
}
void shuffle (string array[], int size){ 
    for(int shuffle = 0; shuffle < 7; shuffle++){
        for(int i=0;i<size;i++){
            int random = rand()%size;
            int random2 = rand()%size; //so i need a return statement for an array
            string temp = array[random];
            array[random]=array[random2];
            array[random2]=temp;
        } //passing array to and from function (half-points bc im not doing the from)
    }
}

void cheat(){
    cout<<"No Cheating Allowed!"<<endl;
    exit(0);
}

bool chkWin(vector <string>player, int pHs, vector <string>enemy, int eHs){
    int PlaySum=0;
    int EnemSum=0;
    for(int i=0; i<pHs;i++){
       
          switch(player[i][0]){
                    case 'A': PlaySum+=1; break;
                    case '2': PlaySum+=2; break;
                    case '3': PlaySum+=3; break;   
                    case '4': PlaySum+=4; break;
                    case '5': PlaySum+=5; break;
                    case '6': PlaySum+=6; break;
                    case '7': PlaySum+=7; break;   
                    case '8': PlaySum+=8; break;
                    case '9': PlaySum+=9; break;
                    case '1': PlaySum+=10; break;
                    case 'J': PlaySum+=10; break;   
                    case 'Q': PlaySum+=10; break;
                    case 'K': PlaySum+=10; break;
            }
}
    for(int i=0; i<eHs;i++){
            switch(enemy[i][0]){ //2d array
                    case 'A': EnemSum+=1; break;
                    case '2': EnemSum+=2; break;
                    case '3': EnemSum+=3; break;   
                    case '4': EnemSum+=4; break;
                    case '5': EnemSum+=5; break;
                    case '6': EnemSum+=6; break;
                    case '7': EnemSum+=7; break;   
                    case '8': EnemSum+=8; break;
                    case '9': EnemSum+=9; break;
                    case '1': EnemSum+=10; break;
                    case 'J': EnemSum+=10; break;   
                    case 'Q': EnemSum+=10; break;
                    case 'K': EnemSum+=10; break;
            } 
    }
    
   bool answer =(PlaySum <= EnemSum? true: false);
    
}

                