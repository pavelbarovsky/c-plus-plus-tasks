#include <iostream>
#include <fstream>
#include <iomanip> // чтобы работал setprecision

/*
 Вариант 3, периметр и площадь квадрата (номер 2с)
*/

int main()
{

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float num1;

    std::cout << "Vvedite storonu kvadrata: ";
    std::cin >> num1;
    fin >> num1;
    fin.close();

    float P = num1 + num1;
    float S = num1 * num1;
    fout << P << ' ' << S;
    fout.close();


    std::setprecision(7);
    std::cout   << "Perimetr = " << P << std::endl
                << "Ploshad = " << S << std::endl;

 return 0;

}
