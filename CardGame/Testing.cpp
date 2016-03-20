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
	
	// Normal
	cout << "Normal conditions: ";
	Card c1(10, "Red");
	cout <<"Colour: " <<c1.colour() << endl;
	cout << "Number: " <<c1.number() << endl;
	cout << "Combined: ";
	c1.print();
	cout<< endl;

	// Invalid number case
	cout << "Invalid number case: ";
	Card c2(22, "Red");
	cout << endl;

	// Invalid colour case
	cout << "Invalid colour case: ";
	Card c3(10, "Purple");
	cout << endl;

	// Invalid number and colour case
	cout << "Invalid number and colour case: ";
	Card c4(111, "Purple");
	cout << endl;

	return 0;
}
