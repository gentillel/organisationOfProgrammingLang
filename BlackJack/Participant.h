#ifndef Participant_HPP
#define Participant_HPP

#include <list>
#include "Card.h"


class Participant
{

protected:
	std::list<Card*> myCards;
	bool did_I_Win = false;
	bool bust = false;
	int total = 0;
public:
	//Participant(){};
	//~Participant(){};
	void addToList(Card c){
		myCards.push_back(&c);
	}

	bool getWinStatus();
	void setWinStatus(bool status);
	void setTotal(int add_my_total,int p);
	bool getBust();
	int getTotal();
	
};
#endif