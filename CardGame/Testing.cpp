#include <iostream> 
#include <cstdio> 
#include <string> 
#include <cmath> 
#include <ctime> 

#include "Card.h" 
#include "DeckOfCards.h" 

using namespace std;

int main() // main testing programme
{
	// Testing card class:
	cout <<"Testing card class:" << endl;
	// Normal
	cout << "Normal conditions: ";
	Card card1(10, "Red");
	cout << "Colour: " << card1.colour() << endl;
	cout << "Number: " << card1.number() << endl;
	cout << "Combined: ";
	card1.print();
	cout<< endl;

	// Invalid number case
	cout << "Invalid number case: ";
	Card card2(22, "Red");
	cout << endl;

	// Invalid colour case
	cout << "Invalid colour case: ";
	Card card3(10, "Purple");
	cout << endl;

	// Invalid number and colour case
	cout << "Invalid number and colour case: ";
	Card card4(111, "Purple");
	cout << endl;

	// DeckOrCards class testing:
	cout << "Testing DeckOrCards class:" << endl;
	DeckOfCards *myDeck = new DeckOfCards();
	myDeck->print();
	cout << "Number of cards Remaining: " << myDeck->numberOfCards() << endl;

	// test peek:
	cout << "Peek: ";
	myDeck->peek();
	cout << endl;
	
	// test shuffle
	cout << "Shuffle: "<<endl;
	myDeck->shuffle();
	myDeck->print();
	cout << endl;
	
	// test draw
	cout << "Draw: ";
	myDeck->draw();
	cout << endl;
	myDeck->print();
	cout << endl;
	cout << "Number of cards Remaining: " << myDeck->numberOfCards() << endl;
	cout << endl;

	return 0;
}
