#include "Card.h"
#include <string>

using namespace std;


Card::Card(int numberIn, string colourIn) // overload default constructor
{
	number = numberIn;
	colour = colourIn;
}


Card::~Card()
{
}
