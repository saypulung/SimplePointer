#include <iostream>
#include "wave.h"
using namespace race; //using namespace from header files (abstract class)

//implement destructor
Wave::~Wave(){
	std::cout<<"Program deleted from memory"<<std::endl;
}

//implement constructor 1
Wave::Wave(){
	setInterval(0);
	setWaveTotal(0);
	setStart(0);
}
//implement constructor and change attributes value
Wave::Wave(int interval,int waveTotal,int start){
	setInterval(interval);
	setWaveTotal(waveTotal);
	setStart(start);
}

//begin getter and setter for private variables
void Wave::setInterval(int interval){this->interval = interval;}
void Wave::setWaveTotal(int waveTotal){this->waveTotal = waveTotal;}
void Wave::setStart(int start){this->start = start;}
int Wave::getInterval(){return this->interval;}
int Wave::getStart(){return this->start;}
int Wave::getWaveTotal(){return this->waveTotal;}
//end getter and setter

//implement procedure Start
void Wave::Start(){
	std::cout<<"Program has been started!"<<std::endl;
	std::cout<<"Your interval is   : "<<this->getInterval()<<std::endl;
	std::cout<<"Your wave total is : "<<this->getWaveTotal()<<std::endl;
	std::cout<<"Your start is : "<<this->getStart()<<std::endl;
}

