#include "Dealer.h"

void Dealer::dealCards(Participant* player, int howMany, int p){
	for(int i =0; i < howMany; i++){
		Card temp = deck.getCard(p);
		player->addToList(temp);
		player->setTotal(temp.value,p);
	}
}



