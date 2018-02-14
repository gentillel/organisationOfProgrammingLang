 
#include <iostream> 
#include "Dealer.h"
#include "Player.h"

bool is_gameOver(Participant* p,int palyer);
bool did_all_players_lose(Player* arr[], int len);

int main(int argc, char const *argv[])
{
	Dealer dealer; 
	int num_of_players;
	int tempVar;
	bool gameOver;
	char playerChoice;

	std::cout<<"Hello and Welcome to BlackJack" << std::endl;
	std::cout << "how many players today? " <<std::endl;
 
	 
	std::cin >> num_of_players;
	Player* arrOfPlayers[num_of_players];

	//creates the new players and takes their bet
	for (int i = 0; i < num_of_players; i++)
	{
	   std::cout << "Place your bet player " << i+1 <<std::endl;
	   arrOfPlayers[i] = new Player(); 
	   std::cin >> tempVar; 
	   arrOfPlayers[i]->setMyBet(tempVar);  
	}

	//time for the players to get their initial 2 cards
	for(int i = 0; i < num_of_players;i++){
		dealer.dealCards(arrOfPlayers[i],2,i+1);
		std::cout << std::endl;
	}
	 //dealer gets initial 2 cards
		dealer.dealCards(&dealer,2,0);
		std::cout << std::endl;


	while(!gameOver){
		//checks to see if there is a winner among players
		for(int i = 0; i < num_of_players;i++){
			if(is_gameOver(arrOfPlayers[i],i+1)){
				gameOver = true;
				continue;
			}
		}
		//check to see if dealer won
		if (is_gameOver(&dealer,0))
		{
			gameOver = true;
			continue;
		}
		

		for(int i = 0; i < num_of_players;i++){
			if(arrOfPlayers[i]->getBust()){
				i++;
				continue;
			}
			std::cout << "your turn player " << i+1 << " Enter 'H' to hit and 'S' to stand" << std::endl;
			std::cin >> playerChoice;

			if (playerChoice == 'H'){
				dealer.dealCards(arrOfPlayers[i],1,i+1);
			}

		}

		if(did_all_players_lose(arrOfPlayers, num_of_players)){
			gameOver = true;
			continue;
		}
		//dealers turn
		if(dealer.getTotal() <17){
			dealer.dealCards(&dealer,1,0);
			std::cout << std::endl;
		}
		

	}
	
	return 0;
	
}

bool is_gameOver(Participant* p, int player){
	//if you won
	if (p->getWinStatus())
	{
		std::cout<< "player " << player << " won " << p->getTotal() <<std::endl;
		return true;
	}

	if (player == 0 && p->getBust())
	{	
		std::cout<< "dealer loses players" << " win " << p->getTotal() <<std::endl;
		return true;
	}

	return false;
}

bool did_all_players_lose(Player* arr[], int len){
	for (int i = 0; i < len; ++i)
	{	//at least one is still in the game
		if (arr[i] ->getTotal() < 21)
		{
			return false;
		}
		return true;
	}
}