#include "DeckOfCards.h"
#include "Participant.h"
class Player;

/*
	dealer class is the only one who has access to the deck of cards directly
*/
class Dealer : public Participant
{

private:
	DeckOfCards deck;
public:
	Dealer(){}
	~Dealer(){}
	void dealCards(Participant* player, int howMany, int p);
	
};