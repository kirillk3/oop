/*
 * oopz2.cpp
 *
 *  Created on: 14 нояб. 2021 г.
 *      Author: Ki
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
unsigned int choice = 0;
class CapVolume {
private:
	unsigned int input = 0;
	unsigned int volume = 0;
	unsigned int currentlevel = 0;

public:
void setvolume(){
	cout<<"Введите объём стакана в мл"<<endl;
	cin>>input;
	volume=input;
//	volume=p_volume;
	cout<<"Задан объём "<<volume<<" мл"<<endl;
}
void fillin() {
	cout<<"Введите количество воды для доливки, доступно "<<volume-currentlevel<<" мл"<<endl;
	cin>>input;
	if (input<=(volume-currentlevel))
	{currentlevel+=input;
	}
	}
void poorout() {
	cout<<"Введите количество воды, чтобы вылить, доступно "<<currentlevel<<" мл"<<endl;
	cin>>input;
	if (input<=(currentlevel))
	{currentlevel-=input;
	}
	}
void currlevel(){
	cout<<"Задан объём "<<volume<<" мл"<<endl;
	cout<<"залито в стакан "<<currentlevel<<" мл"<<endl;
	cout<<"доступно "<<volume-currentlevel<<" мл воды для доливки"<<endl;
}
};

int main() {
	CapVolume Cap1;
	Cap1.setvolume();
	while(1){
		cout<<"Что вы хотите сделать?"<<endl;
		cout<<"1. Долить  "<<"2. Отлить  "<<"3. Узнать текущий уровень"<<endl;
		cin>>choice;
		switch (choice){
		case 1:
			Cap1.fillin();
			break;
		case 2:
			Cap1.poorout();
			break;
		case 3:
			Cap1.currlevel();
			break;
		}
	};
}



