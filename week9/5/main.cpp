#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Вычислить произведение отрицательных/положительных элементов массива
*/

int main(){

    srand(time(0)); // инициализация генерации случайных чисел

    ofstream fout;
    fout.open("out.txt");

    int n =8;
    int mas[n];
    int pr1 = 1;
    int pr2 = 1;

        for(int i = 0; i < n; i++){
            mas[i] = rand() % 26 - 10;
                cout << mas[i] << " ";

        if(mas[i] >= 0){   // произведение положительных
            pr1 = pr1*mas[i];
        }

        if(mas[i] <= 0){   // произведение отрицательных
            pr2 = pr2*mas[i];
        }
}
    cout << endl;
    cout << " proizvedenie polozhitelnih = " << pr1 << endl;
    cout << " proizvedenie otricatelnih = " << pr2;

    fout << pr1 << " ";
    fout << pr2 << " ";
    fout.close();

    return 0;
}
