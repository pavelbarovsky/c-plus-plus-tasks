#include <iostream>
#include <iomanip> // чтобы работал setprecision
#include <fstream>

/*Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а
также разность удвоенной суммы первого и третьего чисел и утроенного второго
числа. Вариант 3, задача 6
*/

float num1;
float num2;
float num3;

void sred() {
    std::cout << "(x + y + z)/3, (Srednee) = " << (num1 + num2 + num3)/3 << std::endl;
}

void xz() {
     std::cout << "2*(x + z)-3*y, (Raznost) = " << 2*(num1 + num3)-3*num2 << std::endl;
}
int main() {

std::ifstream fin;
std::ofstream fout;
fin.open("in.txt");
fout.open("out.txt");

fin >> num1;
fin >> num2;
fin >> num3;
fin.close();

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    sred();
    xz();

fout << (num1 + num2 + num3)/3 << ' ' << 2*(num1 + num3)-3*num2;
fout.close();

return 0;

}
