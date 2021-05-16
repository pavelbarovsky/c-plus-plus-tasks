#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
/*
Вариант 3, задача 2, рисунок в (из пятой недели)
Сделайте рефакторинг задач на проверку нахождения точки в закрашенной области
из предыдущего домашнего задания. В результате, вместо двух переменных,
описывающих координаты точки, должна быть одна переменная-структура с
атрибутами – координатами.
*/

struct Point {
    float x,y;
};

Point popal;

void uslovie();

int main(){

std::ifstream fin;
std::ofstream fout;
fin.open("in.txt");
fout.open("out.txt");

    std::cout << "Vvedite x y:"<< std::endl;
    std::cin >> popal.x >> popal.y;

fin >> popal.x;
fin >> popal.y;
fin.close();

    uslovie();

fout.close();

return 0;
}

void uslovie (){
    if ((popal.y<=2-popal.x*popal.x)&&(popal.y>=popal.x)&&(popal.x>=0))
            std::cout << "Tochka popadaet"<< std::endl;
    else
            std::cout << "Tochka ne popadaet"<< std::endl;
}
