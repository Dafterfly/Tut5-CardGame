#pragma once
#include <string>

using namespace std;

class Card
{
private:
	int num;
	string col = ""; 

public:
	Card::Card();
	Card(int number, string colour);
	~Card();
	string colour(); 
	int number();
	void print();
};

