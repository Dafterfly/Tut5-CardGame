#pragma once

#include "Card.h" // in order to make Card objects
#include <vector>

class DeckOfCards
{
private: int noOfCards;
		 Card *ptrCard = NULL;  //card stack / array pointer
		 vector<Card> myDeck;
public:
	DeckOfCards();
	~DeckOfCards();
	DeckOfCards reset();  
	void shuffle();
	void draw();   
	void peek();  
	int numberOfCards();
	void print();
};

