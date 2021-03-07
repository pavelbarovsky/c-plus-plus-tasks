#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

/*
Вариант 3, задача 1 пример F
y = 2x*x+10, если x > 5
y = 0, если x = 0
y = 2*|x+6|-x*x, если x < 5

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

if (x>5)
y= 2*x*x+10;
if (x==0)
y= 0;
if (x<5)
y= 2*abs(x+6)-x*x;
    std::cout << y <<std:: endl ;

    fout << y;
    fout.close();

    return 0;
}
