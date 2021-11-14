/*
 * oopz1.cpp
 *
 *  Created on: 14 нояб. 2021 г.
 *      Author: Ki
 */
#include <iostream>
#include <stdlib.h>
using namespace std;
class DoorStatus {

private:
	unsigned int input = 0;
	unsigned int pincode = 0;
	enum Statuses {
	OPEN,
	CLOSED,
	CLOSEDWTHPIN
	};
	Statuses doorstat = OPEN;
public:

void getsetdoorstatus() {
	//system("CLS");

switch (doorstat)
{
case OPEN:
	cout << "Door is open"<<endl;
	cout<<"What do you want to do with the door?(enter a number)"<<endl<<"1. Close the door "<<endl<<"2. Close the door with pincode"<<endl;
cin>>input;
if (input==1) {doorstat=CLOSED;} else if (input==2) {
	cout<<"Enter digits of the pin code (do not start writing the number with zeros. )"<<endl;
	cin>>input;
	//system("CLS");
	pincode=input; input=0;
	doorstat=CLOSEDWTHPIN;};
break;
case CLOSED:
	cout << "Door is closed"<<endl;
	cout<<"What do you want to do with the door?(enter a number)"<<endl<<"1. Open the door "<<endl;
	cin>>input;
if (input==1) {doorstat=OPEN;};
break;
case CLOSEDWTHPIN:
	cout << "The door is closed with a pin code"<<endl;
	cout<<"What do you want to do with the door?(enter a number)"<<endl<<"1. Open the door with pincode"<<endl;
	cin>>input;
	if (input==1) {cout<<"Enter digits of the pin code (do not start writing the number with zeros.)"<<endl;
	cin>>input;
	};
	if (input==pincode) {doorstat=OPEN;} else {cout<<"Code is wrong"<<endl;
	break;}
}
}
};

int main() {
	DoorStatus door1;
	while(1){
	door1.getsetdoorstatus();

	};
}


