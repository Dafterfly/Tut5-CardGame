#pragma once

#include "Card.h" // in order to make Card objects

class DeckOfCards
{
private: int noOfCards;
		 Card *ptrCard = NULL;  //card stack / array pointer
public:
	DeckOfCards();
	~DeckOfCards();
	DeckOfCards reset();  
	void shuffle();
	Card draw();   
	Card peek();  
	int numberOfCards();
	void print();
};

