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
    int value; 
    string card;
    //File input/output
        srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    unsigned short vC1,vC2,vC3,vC4,vC5;
    unsigned char nCards;
    int players;
    string faces;
    string names;
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

            cout<< "Enter number of players and player names" << endl;
            cin>>player>>name;
           char keepPlaying = 'n'; //loop control variable

do {
play21();

//keep playing?
cout <<

"Do you want to play another hand (y/n)?";
cin >> keepPlaying;

}

while(keepPlaying == 'Y' || keepPlaying == 'y');
}

void

play21(void){ //play one hand of 21 //randomize the cards
srand((

int) time(0)); // deal the cards int person = dealCards(2, "Your Cards:");
cout <<

" = " << person << endl; int house = dealCards(2, "Computers Cards:");
cout <<

" = " << house << endl; // Ask if human wants a hit
hit(person);

cout << endl;

//Determine if computer takes a hit while ((house < person) && (house <= 21) && (person <= 21)) {
house += dealCards(1,

"The Computer takes a card ");
cout << endl;

}

//show who won....
determineWinner(person, house);

}

 

void

determineWinner(int humanScore, int houseScore) { //compare the scores to see who won //Both the human and the house score totals are provided as arguments //Display total scores and indicate winner //possible outcomes: human wins, computer wins, tie //display the scores
cout <<

"Your Score: " << humanScore << endl;
cout <<

"Computer Score: " << houseScore << endl; //decide who should win if (humanScore == houseScore)
cout <<

"Tie"; if ((humanScore == 21 || humanScore >= houseScore || houseScore > 21) && (humanScore <= 21))
cout <<

"\nYou Won!\n"; else
cout <<

"\nThe Computer won!\n";
}

int

dealCards(int numberOfCards, string message){ //deals cards //The number of cards to be delt is provided as an argument //A message indicating which player is recieving the cards is also //given as an argument //The player message and the cards delt is displayed to the screen //the total value of the cards delt is returned int cardDealt = 0; int totalValue = 0;
cout << message <<

" "; //deal the number of required cards for (int i = 1 ; i <= numberOfCards ; i++){ //get a card
cardDealt = Random(1, 10);

//accumulate the card values
totalValue += cardDealt;

cout << cardDealt <<

" ";
}

return totalValue;
}

void

hit(int &playerScore){ //Ask the human if they want another card -- 'a hit' //the player's score total is accumulated as they take cards //the player can contiue taking cards until they wish to stop or they exceed 21 //After a card is taken the user's current total is displayed //If the user goes over 21 'busted' is displayed //Keep giving the player cards until he wants to stop or goes over 21 char takeHit = 'Y'; while (takeHit != 'n') { if (playerScore < 21) { //does the player want a hit?
cout <<

"do you want a hit (Y/N)? ";
cin >> takeHit;

if (takeHit == 'Y' || takeHit == 'y'){ //the player wants a hit so deal a card
playerScore += dealCards(1,

"Hit: ");
cout <<

"Your total is " << playerScore << endl;
}

else //the player does not want another card
takeHit =

'n';
}

else { //the player has busted if (playerScore > 21)
cout <<

"You Busted..\n\n";
takeHit =

'n';
}


            
           //( array for each face?
          //"Ace" = 0
         // "Two" = 1
         // "Three"
           //        ) 
              string faces[13] = { "Ace", "Two", "Three", "Four", "Five",
            "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
	string suits[4] = { "Diamonds", "Clubs", "Hearts", "Spades" };
	string Status[3] = { "In Play", "In Deck", "Discard Pile" };
	int CardValue[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
        //ace, 2,3,4,5,6,7,8,9,10, jack, queen, king
        i think its 11?
	for (int x = 0; x < 52; x++)
	{
            //create a variable for each card
            //use if statement for when another player has picked up that card
            //mark card so noon else can get it
           
            (int x = 52; x>0; x-- )//this line of card takes out cards already used
                    //convert number to integer value
                    value  += sum //the total of each hand
if (value > 21)
			cout << endl << "BUSTED. Over 21";// display results if over 21
		if (value == 21)
			cout << endl << "21. Automatic WIN!!";

            //whole number is suit and remainder is the card
            //example : 1 is a club,  and remainder 1 would be ace

                //use for loop to read each value
//variables for cards
//availability
//card hands
//vriable card hands value
//variable to randomly generate a number for 1-52
            //make it run through the deck with if statment: if value is true and available, pick up, if not its unavailable
            //deck has three list of variables: first list is face of suits
            //second list is availability - if player can pick up a card
            //third list is numbered card ace-king, which card to pick up
            //use index number for card availability, if card isnt available, generate another number
            //availability is false if it reaches the same card or if an enemy player has that card
            //figure out how to check other players cards
            //worry less about face/suits to ease on difficulty
         
    return 0;
}

