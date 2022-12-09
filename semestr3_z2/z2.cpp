#include <iostream>
#include <string>

//https://www.programiz.com/cpp-programming/online-compiler/

class human {
    public:
    int haircolor,curlyorstraight,eyecolor,freckles,myopia;
    void setparams() {
        std::cout<<"Какой цвет волос?"<<std::endl<<"0. тёмные, 1. светлые"<<std::endl;
        std::cin>>haircolor;
        std::cout<<"Волосы курчавые или прямые?"<<std::endl<<"0. курчавые, 1. прямые"<<std::endl;
        std::cin>>curlyorstraight;
        std::cout<<"Цвет глаз?"<<std::endl<<"0. карие, 1. голубые или серые"<<std::endl;
        std::cin>>eyecolor;
        std::cout<<"Веснушки?"<<std::endl<<"0. Да, 1. Нет"<<std::endl;
        std::cin>>freckles;
        std::cout<<"Есть близорукость?"<<std::endl<<"0. Да, 1. Нет"<<std::endl;
        std::cin>>myopia;
        };
    void getparams() {
        if (haircolor==0) std::cout<<"Волосы тёмные, "; else if (haircolor==1) std::cout<<"Волосы светлые, ";
        if (curlyorstraight==0) std::cout<<"курчавые. "; else if (curlyorstraight==1) std::cout<<"прямые. ";
        if (eyecolor==0) std::cout<<"Глаза карие. "; else if (eyecolor==1) std::cout<<"Глаза голубые или серые. ";
        if (freckles==0) std::cout<<"Есть веснушки. "; else if (freckles==1) std::cout<<"Нет веснушек. ";
        if (myopia==0) std::cout<<"Близорукость."; else if (myopia==1) std::cout<<"Отсутствие близорукости.";
    };
};

human a,b; //-первый родитель a, второй родитель b

class child : public human {
    public:
        void determinparams() {
            haircolor=a.haircolor*b.haircolor;
            curlyorstraight=a.curlyorstraight*b.curlyorstraight;
            eyecolor=a.eyecolor*b.eyecolor;
            freckles=a.freckles*b.freckles;
            myopia=a.freckles*b.freckles;};
    
};

int main(){
std::cout<<"Программа по доминантным признакам родителей определит вероятные признаки, которые будут у ребёнка"<<std::endl;

std::cout<<"Первый родитель:"<<std::endl;
a.setparams();
std::cout<<"Выбраны:  ";a.getparams();std::cout<<std::endl;

std::cout<<"Второй родитель:"<<std::endl;
b.setparams();
std::cout<<"Выбраны: ";b.getparams();std::cout<<std::endl;

child c; 
c.determinparams();

std::cout<<"Вероятные признаки, которые будут у ребёнка:"<<std::endl;
c.getparams();

return 0;
}