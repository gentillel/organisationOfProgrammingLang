#include "DeckOfCards.h"
#include <iostream> //most likely to get deleted

DeckOfCards::DeckOfCards(){
	int index = 0;
	std::srand(time(0));
	for(int value = 1; value <= 13; value++){
		for (int newCard = 0; newCard < 4; newCard++){
			//if the value is one we make a note of the ace card
			if (value==1){
				this->cards[index].isAce = true;
			}
			//for anything greater than 10 their value is 10 as per Blackjack rules
			if(value < 10){
				this->cards[index].value = value;
			}else{
				this->cards[index].value = 10;
			}
			index++;
		}
	}
	
	this->shuffle();

}

void DeckOfCards::shuffle(){
	int rand1, rand2;
	Card temp;

	for (int i = 0; i < cardLenght/2; i++)
	{	
		//get two random index
		 rand1 = std::rand() % cardLenght;
		 rand2 = std::rand() % cardLenght;
		// swap them
		temp = this->cards[rand1];
		this->cards[rand1] = this->cards[rand2];
		this->cards[rand2] = temp;

	}
}

Card DeckOfCards:: getCard(int player){
	this->iterator++;
	//player == 0 means that the dealer is getting dealt
	if(player == 0){
		//only say the dealers card every other time
		if(iterator % 2 == 0){
			std::cout << "dealer" <<" you are getting "<< this->cards[iterator].value << std::endl;
		}

	}else{
		std::cout <<"Player " <<player <<" you are getting "<< this->cards[iterator].value << std::endl;
	}

	return this->cards[iterator];
}