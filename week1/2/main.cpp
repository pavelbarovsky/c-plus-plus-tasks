#include <iostream>
#include <fstream>
#include <iomanip> // чтобы работал setprecision

/*
 Вариант 3, периметр и площадь квадрата (номер 2с)
*/

float num1;

void per() {
std::cout   << "Perimetr = " << num1 + num1 << std::endl;
}

void plosh(){
std::cout << "Ploshad = " << num1 * num1 << std::endl;
}

int main()
{

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");


    std::cout << "Vvedite storonu kvadrata: ";
    std::cin >> num1;
    fin >> num1;
    fin.close();

per();
plosh();

    fout.close();


 return 0;

}
