
#include "Participant.h"

class Player : public Participant
{

private:
	int myBet;
	

public:
	Player(){}
	~Player(){}
	void setMyBet(int bet);
	int  getMyBet();

	
	
	
};