#include "Card.h"
#include <string>

using namespace std;


Card::Card(int numberIn, string colourIn) // overload default constructor
{
	num = numberIn;
	col = colourIn;
}


Card::~Card()
{
}

string Card::colour() // return card colur
{
	return col;
}

int Card::number() // return card number 
{
	return num;
}