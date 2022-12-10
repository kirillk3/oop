#include <iostream>
#include <string>

// https://www.programiz.com/cpp-programming/online-compiler/
// https://www.jdoodle.com/online-compiler-c++/  (interactive mode)
// https://replit.com/languages/cpp

class human
{
public:
    bool haircolor, curlyorstraight, eyecolor, freckles, myopia;
    void setparams()
    {
        std::cout << "Какой цвет волос?" << std::endl
                  << "0. тёмные, 1. светлые" << std::endl;
        std::cin >> haircolor;
        std::cout << "Волосы курчавые или прямые?" << std::endl
                  << "0. курчавые, 1. прямые" << std::endl;
        std::cin >> curlyorstraight;
        std::cout << "Цвет глаз?" << std::endl
                  << "0. карие, 1. голубые или серые" << std::endl;
        std::cin >> eyecolor;
        std::cout << "Веснушки?" << std::endl
                  << "0. Да, 1. Нет" << std::endl;
        std::cin >> freckles;
        std::cout << "Есть близорукость?" << std::endl
                  << "0. Да, 1. Нет" << std::endl;
        std::cin >> myopia;
    };
    void getparams()
    {
        std::cout << "Заданы параметры родителя: " << std::endl;
        if (haircolor == false)
            std::cout << "Волосы тёмные, ";
        else
            std::cout << "Волосы светлые, ";
        if (curlyorstraight == false)
            std::cout << "курчавые. ";
        else
            std::cout << "прямые. ";
        if (eyecolor == false)
            std::cout << "Глаза карие. ";
        else
            std::cout << "Глаза голубые или серые. ";
        if (freckles == false)
            std::cout << "Есть веснушки. ";
        else
            std::cout << "Нет веснушек. ";
        if (myopia == false)
            std::cout << "Близорукость.";
        else
            std::cout << "Отсутствие близорукости.";
    };
};

human a, b; //-первый родитель a, второй родитель b

class child : public human
{
public:
    void getparams()
    {
        haircolor = (a.haircolor) and (b.haircolor); // отбросим рецессивные признаки
        curlyorstraight = (a.curlyorstraight) and (b.curlyorstraight);
        eyecolor = (a.eyecolor) and (b.eyecolor);
        freckles = (a.freckles) and (b.freckles);
        myopia = (a.freckles) and (b.freckles);
        std::cout << "Исходя из доминантных признаков вероятны следующие признаки у ребёнка: " << std::endl;
        if (haircolor == false)
            std::cout << "Волосы тёмные, ";
        else
            std::cout << "Волосы светлые, ";
        if (curlyorstraight == false)
            std::cout << "курчавые. ";
        else
            std::cout << "прямые. ";
        if (eyecolor == false)
            std::cout << "Глаза карие. ";
        else
            std::cout << "Глаза голубые или серые. ";
        if (freckles == false)
            std::cout << "Есть веснушки. ";
        else
            std::cout << "Нет веснушек. ";
        if (myopia == false)
            std::cout << "Близорукость.";
        else
            std::cout << "Отсутствие близорукости.";
    };
};

child c; //-ребенок с

int main()
{
    std::cout << "Программа по доминантным и рецессивным признакам родителей определит вероятные признаки, которые будут у ребёнка" << std::endl;

    std::cout << "Первый родитель:" << std::endl;
    a.setparams();
    a.getparams();
    std::cout << std::endl;

    std::cout << "Второй родитель:" << std::endl;
    b.setparams();
    b.getparams();
    std::cout << std::endl;

    std::cout << "___________ИТОГ:___________" << std::endl;
    c.getparams();

    return 0;
}