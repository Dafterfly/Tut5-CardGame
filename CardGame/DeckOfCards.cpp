#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>


using namespace std;

DeckOfCards::DeckOfCards() // initialise a deck of cards
{
	noOfCards = 20; //Start with a full deck again 
	cardPtr = new Card[noOfCards];

	// first half of deck is red 1-10
		 	for (int i = 0; i < 10; i++)
		 	{
				cardPtr[i] = Card(i + 1, "Red");
		 	}

	 	//second half of deck is black 1-10
	 	for (int i = 10; i < 20; i++)
	 	{
			cardPtr[i] = Card((i + 1) - 10, "Black");
	 	}
	

}


DeckOfCards::~DeckOfCards()
{
}
