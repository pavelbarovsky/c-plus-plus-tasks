#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
 1/2x+1/4x+1/6x+...+1/nx Вариант 3, задача 3с. Пользователь задаёт число n и Х. Посчитать y:
*/

int main() {

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

    float x, n, sum;
    int i = 2;
    sum = 0;
        cout << "1/2x+1/4x+1/6x+...+1/nx" << endl;
        cout << "Vvedite x and do kakogo chisla" << endl;
        cin >> x >> n;
            while (i <= n) {
            sum = sum + (float) 1 / (i * x);
            i = i + 2;
    }
                cout << "Result: " << sum << endl;

    fin >> x;
    fout << sum;
    fin.close();
    fout.close();

}
