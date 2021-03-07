#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
/*
Вариант 3, задача 2, рисунок в
*/

int main(){

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x;
    float y;
    std::cout << "Vvedite x y:"<< std::endl;
    std::cin >> x >> y;

    fin >> x;
    fin >> y;
    fin.close();

    if ((y<=2-x*x)&&(y>=x)&&(x>=0))
            std::cout << "Tochka popadaet"<< std::endl;
    else
            std::cout << "Tochka ne popadaet"<< std::endl;
    fout.close();
    return 0;
}
