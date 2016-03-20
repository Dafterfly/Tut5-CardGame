#include "Card.h"
#include <string>
#include <iostream>

using namespace std;

Card::Card() 
{
	
}

Card::Card(int numberIn, string colourIn) // overload default constructor
{
	// check if numberIn falls within range
	if (numberIn >= 1 && numberIn <= 10)
	{
		num = numberIn;
	}
	else
	{ 
		cout <<"The number entered does not fall within range"<< endl;
	}
	
	// check if colourIn is valid
	if (colourIn.compare("Black") == 0 || colourIn.compare("Red")==0)
	{
		col = colourIn;
	}
	else
	{
		cout << "The colour entered is not valid" << endl;
	}
}


Card::~Card()
{
}

string Card::colour() // return card colour
{
return col;
}

int Card::number() // return card number 
{
return num;
}

void Card::print() // display card as “colour number”
{
cout << col << " " << num;
}