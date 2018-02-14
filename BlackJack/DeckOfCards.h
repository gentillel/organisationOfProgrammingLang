//for the random numbers
#include <cstdlib>
#include <ctime>
#include "Card.h"

class DeckOfCards
{

private:
	const static int cardLenght = 52;
	//Array of cards
	Card cards[cardLenght];
	int iterator = 0;

public:
	DeckOfCards();
	~DeckOfCards(){}
	int dealCard();
	// take two random numbers from 0 to <52 as index and swap them
	//therefore effectively shuffling the cards
	void shuffle();
	Card getCard(int player);
	
};