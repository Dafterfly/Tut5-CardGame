#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>


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

