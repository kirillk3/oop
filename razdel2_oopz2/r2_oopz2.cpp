/*
 * r2_oopz2.cpp
 *
 *  Created on: 15 нояб. 2021 г.
 *      Author: Ki
 */
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <unistd.h>

#define PI 3.14159265

using namespace std;
unsigned int input = 0;

class Sinusgen {

private:
	float a,res=0;
	unsigned int f,d = 0;

public:
	void Setparam() {
		cout<<"Введите амплитуду синуса"<<endl;
			cin>>a;
		cout<<"Введите частоту сигнала"<<endl;
			cin>>f;
		cout<<"Введите частоту дискретизации"<<endl;
			cin>>d;
	}
	void Startgen() {
		cout<<"результат будет выведен в виде: момент секунды; амплитуда"<<endl;
		sleep(1);
		cout<<"число выведенных строк зависит от f дискретизации"<<endl;
		sleep(2);
		for (unsigned int i=1;i<(d+1);i++){
			float ii=i;
			float dd=d;
			float time=ii/dd;
			res=a*sin(2*PI*f*i/d);
			cout<<time<<";"<<res<<endl;
		}

	}
};
int main() {

	Sinusgen gener1;
	gener1.Setparam();
	gener1.Startgen();

}





