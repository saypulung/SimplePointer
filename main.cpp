/*
Simple programs OOP with pointer, header files, makefile, and interactive.
author : saypulung@gmail.com
Created with DevC++ 5.11
Date   : 30-09-2017
*/


#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include "wave.h"

using namespace std;
race::Wave wave;

int i=0,s=0,w=0;
char cmd = 0x0;

//procedure to change integer variable
void showCmd(string cmd,int &var){
	system("cls");
	cout<<cmd;
	cin>>var;
}
//procedure show banner
void showBanner(){
	system("cls");
	cout<<"Simple OOP and Ponter"<<endl;
	cout<<"Type i for change interval"<<endl;
	cout<<"Type s for change start"<<endl;
	cout<<"Type w for change waves"<<endl;
	cout<<"Type r to run"<<endl;
	cout<<"Type t to terminate"<<endl;
	cout<<"Current value is "<<i<<"(interval), "<<s<<"(start), "<<w<<"(waves)"<<endl;
	cout<<"-----------------------"<<endl;
}
int main(int argc, char** argv) {
	while(1){
		showBanner();
		cout<<"Cmd : ";
		cmd = getch();
		if(cmd!=NULL){
			switch(cmd){
				case 'i':
					showCmd("Input Intervals : ",i);
					break;
				case 's':
					showCmd("Input Start : ",s);
					break;
				case 'w':
					showCmd("Input Waves : ",w);
					break;
				case 'r':
					system("cls");
					wave.Start();
					system("pause");
					break;
				case 't':
					//call destructor
					wave.~Wave();
					return 1;
					break;
				default:
					break;
			}
		}
		wave.setInterval(i);
		wave.setStart(s);
		wave.setWaveTotal(w);
	}
	return 0;
}
