#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>
#include <ctime>

using namespace std;

DeckOfCards::DeckOfCards() // initialise a deck of cards
{
	noOfCards = 20; //Start with a full deck again 
	ptrCard = new Card[noOfCards];

	// first half of deck is red 1-10
		 	for (int i = 0; i < 10; i++)
		 	{
				ptrCard[i] = Card(i + 1, "Red");
		 	}

	 	//second half of deck is black 1-10
	 	for (int i = 10; i < 20; i++)
	 	{
			ptrCard[i] = Card((i + 1) - 10, "Black");
	 	}
}


DeckOfCards::~DeckOfCards()
{
	delete[] ptrCard;
}

DeckOfCards DeckOfCards::reset(){ // makes a new deck
		noOfCards = 20; // reset number of cards (in case draw() was used)
	return DeckOfCards(); 
}

Card DeckOfCards::draw(){ // draws a card
	ptrCard[noOfCards - 1].print(); // displays card
	noOfCards--;  //Decrement card count 
	return ptrCard[noOfCards];
	delete &ptrCard[noOfCards]; // removes card from deck
}

Card DeckOfCards::peek(){ // prints card at top of deck (like draw but des not delete the card)
	ptrCard[noOfCards - 1].print();
	return ptrCard[noOfCards - 1];
}

void DeckOfCards::shuffle(){ //picks two random cards and switches their order repeats this 50 times 
	srand(time(NULL));  //seed the randomizer  
	Card temp;
	int r1 = 0; //first random card index
	int r2 = 0; //second random card index
	for (int i = 0; i < 50; i++)
	{
		r1 = rand() % 19;
		r2 = rand() % 19;
		if (r1 != r2) // swap cards if index is not the same
		{
			temp = ptrCard[r1];
			ptrCard[r1] = ptrCard[r2];
			ptrCard[r2] = temp;
		}
		else
		{
			cout << "Error During Shuffling. Trying again" << endl;
		}
	}
}

