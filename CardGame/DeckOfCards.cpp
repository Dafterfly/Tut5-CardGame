#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

DeckOfCards::DeckOfCards() // initialise a deck of cards
{
	noOfCards = 20; //Start with a full deck again 
	//ptrCard = new Card[noOfCards];
	Card tempCard;
	// first half of deck is red 1-10
	for (int i = 0; i < 10; i++)
	{
		Card tempCard(i + 1, "Red");
			 myDeck.push_back(tempCard);
	}
	
	//second half of deck is black 1-10
	for (int i = 10; i < 20; i++)
	{
		myDeck.push_back(Card(i + 1-10, "Red"));
	}
}


DeckOfCards::~DeckOfCards()
{
	delete[] ptrCard;
}

DeckOfCards DeckOfCards::reset()// makes a new deck
{ 
	noOfCards = 20; // reset number of cards (in case draw() was used)
	return DeckOfCards(); 
}

void DeckOfCards::draw() // draws a card
{
	myDeck.back().print();
	(myDeck.pop_back());
}

void DeckOfCards::peek() // prints card at top of deck (like draw but des not delete the card)
{
	(myDeck.back()).print();
}

void DeckOfCards::shuffle() //picks two random cards and switches their order repeats this 50 times 
{
	if (noOfCards >= 2)
	{
		random_shuffle(myDeck.begin(), myDeck.end());
	}
	else
	cout <<"There are not enough cards to shuffle!"<< endl;
}

int DeckOfCards::numberOfCards(){
 	return noOfCards;
}


void DeckOfCards::print()// prints the deck of cards
{
	int i;
	cout <<"Deck:" << endl;
	for (i = 0; i < noOfCards; i++)
	{
		ptrCard[i].print();
		cout << endl;
	}
}

