#include <iostream>
#include <iomanip> // чтобы работал setprecision
#include <fstream>

/*Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а
также разность удвоенной суммы первого и третьего чисел и утроенного второго
числа. Вариант 3, задача 6
*/

int main()
{
    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float num1;
    float num2;
    float num3;

    fin >> num1;
    fin >> num2;
    fin >> num3;
    fin.close();

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    float S = (num1 + num2 + num3)/3;
    float R = 2*(num1 + num3)-3*num2;

    fout << S << ' ' << R;
    fout.close();


    std::setprecision(7);
    std::cout   << "(num1 + num2 + num3)/3, (Srednee) = " << S << std::endl
                << "2*(num1 + num3)-3*num2, (Raznost) = " << R << std::endl;


 return 0;

}
