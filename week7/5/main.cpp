#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

/*
Составить алгоритм, определяющий количество трёхзначных натуральных чисел,
сумма цифр которого равна А.
*/

int A;
int count = 0;
int i = 99;

void poisk(){
    std::cout << "Vvedite A " << std::endl;
    std::cin >> A;
    while(++i < 1000)
        if(i % 10 + i / 10 % 10 + i / 100 == A)
            count = count+1;
    std::cout << count << std::endl;
}


int main() {

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    poisk();

    fin >> A;
    fout << count;
    fin.close();
    fout.close();

    return 0;
}
