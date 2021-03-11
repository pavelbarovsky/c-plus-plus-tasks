#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

int main() {

    /*
Составить алгоритм, определяющий количество трёхзначных натуральных чисел,
сумма цифр которого равна А.
*/

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    int n;
    int count = 0;
    int i = 99;

    std::cout << "Vvedite n " << std::endl;
    std::cin >> n;

    while(++i < 1000)
        if(i % 10 + i / 10 % 10 + i / 100 == n)
            count = count+1;
    std::cout << count << std::endl;

    fin >> n;
    fout << count;
    fin.close();
    fout.close();

    return 0;
}
