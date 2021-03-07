#include <iostream>
#include <string>
#include <cmath>

/*
Вариант 3, задача 3, рисунок в
*/

int main(){
    float x;
    float y;
    std::cout << "Vvedite x y:"<< std::endl;
    std::cin >> x >> y;
    if ((x<=1)&&(x>=-1)&&(y>=(1-sqrt(1-x*x))&&(y<=(1-x*x))))
            std::cout << "Tochka popadaet"<< std::endl;
    else
            std::cout << "Tochka ne popadaet"<< std::endl;
    return 0;
}
