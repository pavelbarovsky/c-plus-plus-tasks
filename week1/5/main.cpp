#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

/*
Площадь (метры, гектар, акры), конвертер, Вариант 3 задача 9
*/

int main(){

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    int a, b;
    float R, S;
    std::string name [3]={"m", "ga", "ac"};
    std::cout << "vibirite dve velichini:"<< std::endl;
    for (int i=0; i<3; i++)
        std::cout << i+1 << '.' << name[i] << '\t' << i+1 << '.' << name[i]<<std::endl;
    std::cin >> a >> b;
    std::cout << "vvedite ploshad poverhnosti: ";
    std::cin >> S;

    fin >> a;
    fin >> b;
    fin.close();

    if (a==1 && b==2)
        R=S*0.0001;
    if (a==1 && b==3)
        R=S*0.000247105;
    if (a==2 && b==1)
        R=S*10000;
    if (a==2 && b==3)
        R=S*2.471;
    if (a==3 && b==1)
        R=S*4046.86;
    if (a==3 && b==2)
        R=S*0.4047;

    fout << R << ' ' << S;
    fout.close();

    std::cout <<S<<name[a-1]<<'='<<R<<name[b-1];
    return 0;
}
