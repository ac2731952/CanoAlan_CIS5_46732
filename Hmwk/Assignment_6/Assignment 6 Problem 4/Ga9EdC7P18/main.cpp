/* 
 * File: main.cpp
 * Author: Alan Cano
 * Created on: 7/23/2020
 * Purpose: Tic-Tac-Toe
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

void shB(char[][3]); //board
bool chW(char[][3], char); //winnef
void pMv(char[][3], char);//moves

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    char board[3][3] = {{'*', '*', '*'},
                        {'*', '*', '*'},
                        {'*', '*', '*'}};

    int moves = 0;  

    do{
    while(true){
       
        shB(board);

        cout << "Player 1 select location:\n";

        pMv(board, 'X');

        moves++;

        
        if(chW(board, 'X')){
            
            cout << "Player 1 has won";
            return 0;
        }

       
        shB(board);

        cout << "Player 2 select location:\n"; 
        
        pMv(board, 'O');
        moves++;
        if(chW(board, 'O')){
            
            cout << "Player 2 has won";
            return 0;
        }
    }

    shB(board);
    cout << "This game is a tie!\n";
    }while(moves==9);

    //Display Outputs

    //Exit stage right!
    return 0;
}


void shB(char board[][3]){
    
    //loop on the rows
    for(int row = 0; row < 3; row++){
        //loop on the columns
        for(int col = 0; col < 2; col++)
            
            cout << board[row][col] << "|";
           cout<<board[row][2];
        
       
        if(row<2)
        cout <<"\n-|-|-" << endl;
        
        
    }
    
cout<<endl;
    
}

bool chW(char board[][3], char player){
    
    bool flag;

    
    for(int row = 0; row < 3; row++){
       
        flag = true;

        //loop within a row
        for(int col = 0; col < 3; col++){
            
            flag *= (board[row][col] == player);
        }

        if(flag)
            return true;
        else
            continue;
    }

    for(int col = 0; col < 3; col++){
        flag = true;
        for(int row = 0; row < 3; row++){
            flag *= (board[row][col] == player);
        }

        if(flag)
            return true;
        else
            continue;
    }

    
    flag = true;
    
    for(int i = 0; i < 3; i++){
        flag *= (board[i][i] == player);
    }
    
    if(flag)
        return true;

    flag = true;
   
    for(int col = 0; col < 3; col++){
        flag *= (board[2-col][col] == player);
    }
   
    if(flag)
        return true;

    return false;
}


void pMv(char board[][3], char player){
    
    int row, col;

    cin >> row;
    cin >> col;

  
    while(board[row-1][col-1] != '*' ||
          row > 3 || row < 0 ||
          col > 3 || row < 0)
            {
        cout << "Invalid move! Try again\n";
        cout << "Row: ";
        cin >> row;
        cout << "Col: ";
        cin >> col;
    }

    board[row-1][col-1] = player;
}