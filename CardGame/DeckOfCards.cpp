#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

DeckOfCards::DeckOfCards() // initialise a deck of cards
{
	createDeck();
}

void DeckOfCards::createDeck()
{
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
		myDeck.push_back(Card(i + 1 - 10, "Black"));
	}
}


DeckOfCards::~DeckOfCards()
{
	delete[] ptrCard;
}

void DeckOfCards::reset()// makes a new deck
{ 
	createDeck();
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
	if (myDeck.size() >= 2)
	{
		random_shuffle(myDeck.begin(), myDeck.end());
	}
	else
	cout <<"There are not enough cards to shuffle!"<< endl;
}

int DeckOfCards::numberOfCards(){
 	return myDeck.size();
}


void DeckOfCards::print()// prints the deck of cards
{
	cout << "Deck:" << endl;
	vector<Card>::iterator card = myDeck.begin();
	while (card != myDeck.end()) {
		card->print();
		cout<<endl;
		card++;
	}
	cout << endl;
}

