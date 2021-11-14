/*
 * oopz2.cpp
 *
 *  Created on: 14 нояб. 2021 г.
 *      Author: Ki
 */
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
unsigned int choice = 0;
class EquationProperties {

private:
	double a,b,c = 0;
	double x1,x2;
	bool noroot=false; // флаг, уст. если нет корней
public:
	void entercoefficients(){
		cout<<"Для решения уравнения вида ax^2+bx+c=0"<<endl;
			cout<<"введите целое a"<<endl;
			cin>>a;
			cout<<"введите целое  b"<<endl;
			cin>>b;
			cout<<"введите целое с"<<endl;
			cin>>c;

	};
	void show(){
		cout<<"Корни уравнения "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 :"<<endl;
		if(noroot==true){cout << "Дискриминант меньше 0, корни невещественные." << endl;} else
		{cout<<"x1="<<x1<<"; x2="<<x2<<endl;}
			};
	void calculate(){
		if((b*b-4*a*c)>=0) //Если дискриминант больше или равен 0
		{
		    x1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
		  //  cout << "Первый корень равен " << x1 << endl;
		    x2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
		  //  cout << "Второй корень равен " << x2 << endl;
		} else  {noroot=true;}
	}
};

int main() {
	EquationProperties Equation1;
	Equation1.entercoefficients(); //задать коэффициенты
	Equation1.calculate();
while(1){
	cout<<"Навигация:"<<endl<<"1.Посмотреть заданные коэффициенты и найденные корни"<<endl<<"2. Задать новые коэффициенты"<<endl;
cin>>choice;
switch(choice){
case 1:
Equation1.show();
break;
case 2:
Equation1.entercoefficients();
Equation1.calculate();
break;
}
}
}



