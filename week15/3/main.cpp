#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* Дана матрица. Элементы первой строки — количество осадков в соответствующий
день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
(ураган — когда самый сильный ветер был в самый дождливый день).
*/

const int rows = 2;  // строки
const int cols = 5;  // столбцы
int matr[rows][cols];
int ar[rows];

int main () {

    //Заполняем массив
    cout << "Vvedite matricu po 5 elementov v 2 stroki: "<< endl;
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++) {
            cin >> matr[i][j];

        }

    system("cls");

    cout << "prognoz pogodi: "<< endl;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++)
        cout << matr[i][j] << " ";
        cout << endl;
    }

    cout << endl;

    int max = matr[0][0];
    for (int i=0; i<cols; i++)
        if (max < matr[0][i])
        max = matr[0][i];

    int max2 = matr[1][0];
    for (int i=0; i<cols; i++)
        if (max2 < matr[1][i])
        max2 = matr[1][i];

    for (int i=0; i<cols; i++)
        if (max == matr[0][i] & matr[1][i] == max2)
        cout << "budet uragan v " << i+1 << " day "<< endl;
    else
        cout << "ne budet uraganov v " << i+1 << " day "<< endl;

}
