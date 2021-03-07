#include <iostream>
#include <fstream>
#include <iomanip> // чтобы работал setprecision

/*
(x+1)2+3(x+1) при а) x=1.7; б) x=3. Ответ: а) 15.39 б) 28 Вариант 3, задача 8
 */

int main()
{
    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x1;
    float x2;


    std::cout << "Enter x1 and x2: ";
    std::cin >> x1 >> x2;
    fin >> x1;
    fin >> x2;
    fin.close();

    float R1 = (x1+1)*(x1+1)+3*(x1+1);
    float R2 = (x2+1)*(x2+1)+3*(x2+1);
    fout << R1 << ' ' << R2;
    fout.close();


    std::setprecision(7);
    std::cout   << "x1 Result (x+1)*(x+1)+3*(x+1) = " << R1 << std::endl;
    std::cout   << "x2 Result (x+1)*(x+1)+3*(x+1) = " << R2 << std::endl;

 return 0;

}
