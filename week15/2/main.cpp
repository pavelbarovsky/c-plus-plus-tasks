#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* Дана матрица. Составить массив, каждый элемент которого равен максимальному
элементу соответствующей строки матрица.
*/

const int rows = 6;  // строки
const int cols = 6;  // столбцы
int mat[rows][cols];
int ar[rows];

void massiv(){
    cout << "Massiv iz max elementov matrici: ";
    for(int i=0; i<rows; i++)
            cout << ar[i] << " ";
}

int main() {

    srand(time(0)); // инициализация генерации случайных чисел

    cout << "Matrica: " << endl;
    for(int i=0; i<rows; i++) {
            int max = 0;
            for(int j=0; j<cols; j++) {
                    cout << (mat[i][j] = rand() % 70) << " ";
                    if (mat[i][j] > max)
                       max=mat[i][j];
                    else
                       mat[i][j]=max;
                    ar[i] = max;
            }
            cout << endl;
    }
    cout << endl;
    massiv();

    return 0;
}
