#pragma once
#include <string>

using namespace std;

class Card
{
private:
	int number;
	string colour = ""; 

public:
	Card(int number, string colour);
	~Card();
};

