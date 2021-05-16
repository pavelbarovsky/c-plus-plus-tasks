#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной
диагонали*/

void summ ();
const int rows = 4;  // строки
const int cols = 4;  // столбцы
int mat[rows][cols];
int diag[rows];
int summa = 0;

int main() {

    srand(time(0)); // инициализация генерации случайных чисел

    for (int i = 0; i < rows; i++) {                               // вывод матрицы 4х4
        for (int j = 0; j < cols; j++) {
            mat[i][j] = rand( )% 120 * (-1) + rand() % 100;
            cout << mat[i][j] << " ";
        }
    cout << endl;
    }

    cout << endl;
        cout << "glavnaya diagonal: ";                                         // вывод главной диагонали (по строкам, начиная с нуля)
        for (int i = 0; i < rows; i++) {
            diag[i] = mat[i][i];
            cout << diag[i] << " ";
    }
    cout << endl;

    summ();
}

void summ(){

    for (int i = 0; i < rows; i++) {
        diag[i] = mat[i][i];
        if (diag[i] < 0)
        summa += diag[i];
        }
    cout << "summa otricatelnih chisel glavnoi diagonali: " << summa;
}
