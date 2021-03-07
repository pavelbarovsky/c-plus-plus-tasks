#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <iomanip> // чтобы работал setprecision

/*
Вводятся два целых числа. Проверить делится ли первое на второе. Вывести на
экран сообщение об этом, а также остаток (если он есть) и частное (в любом
случае). Вариант 3
*/

int main()
{
    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    int a;
    int b;


    std::cout << "Vvedite dva chisla: ";
    std::cin >> a >> b;

    fin >> a;
    fin >> b;

    float div = a/b;
    float mod = a % b;

    fout << div << ' ' << mod;
    fout.close();

    std::setprecision(7);

    if (mod==0)
        std::cout << a << "/" << b << "=" << div << '\t' << "chislo delitsa nacelo bez ostatka" << std::endl;
    if (mod>0)
        std::cout << a << "/" << b << "=" << div << ' ' << "ostatok=" << mod << '\t' << "chislo ne delitsa nacelo" << std::endl;

 return 0;

}
