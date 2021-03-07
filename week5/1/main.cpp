#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

/*
Вариант 3, задача 1 пример С
y = 1,5x + 5, если x > 0
y = -2, если x = 0
y = 2 * |x+4| - 6, если x < 0

*/

int main(){

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x;
    float y;
    std::cout << "Vvedite x:"<< std::endl;
    std::cin >> x;

    fin >> x;
    fin.close();

if (x>0)
y= 1.5*x+5;
if (x==0)
y= -2;
if (x<0)
y= 2*abs(x+4)-6;
    std::cout << y <<std:: endl ;

    fout << y;
    fout.close();

    return 0;
}
