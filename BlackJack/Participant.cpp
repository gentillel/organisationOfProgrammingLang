#include "Participant.h"
#include <iostream>

bool Participant::getWinStatus(){
	return this->did_I_Win;
}
void Participant::setWinStatus(bool status){
		this->did_I_Win = status;
}

bool Participant::getBust(){
	return this->bust;
}

int Participant::getTotal(){
	return this->total;
}

void Participant::setTotal(int add_my_total,int p){
	this->total += add_my_total;
	if(this->total == 21){

		this->did_I_Win = true;
	}

	if (this->total > 21){
		std::cout << "Bummer player " << p << " you are out" <<std::endl;
		this->bust = true;
	}

	if(p!=0){
		//50/50 chance of saying the dealers total
		if(this->total % 2 == 0){
			std::cout << "Player " << p <<" your total is " <<this->total <<std::endl;
		}
		
	}else{
		std::cout << "dealer " << p <<" your total is " <<this->total <<std::endl;
	}
	

}