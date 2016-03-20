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



	return 0;
}
