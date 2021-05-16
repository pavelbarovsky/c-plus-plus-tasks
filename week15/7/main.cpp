#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* В квадратной матрице найти сумму положительных элементов, лежащих на и выше
главной диагонали и расположенных в чётных столбцах */

const int rows = 4;  // строки
const int cols = 4;  // столбцы
int mat[rows][cols];
    int summa_st=0;
    int vishe=0;
    int summa_d = 0;


void summ_vishe(int (&mat) [rows][cols]) {                // выше диагонали сумма
    for (int i=0; i<4; i++)
        for (int j=i+1; j<4; j++)
            if (mat[i][j]>0)
            vishe+= mat[i][j];
    cout << "summa polozhitelnih chisel vishe diagonali: " << vishe <<endl;
}


void summ_d(int (&mat) [rows][cols]){                                            // диагональ сумма
    int diag[rows];
    for (int i = 0; i < rows; i++) {
        diag[i] = mat[i][i];
        if (diag[i] > 0)
        summa_d += diag[i];
        }
    cout << "summa polozhitelnih chisel glavnoi diagonali: " << summa_d << endl;

}


void summ_st(int (&mat) [rows][cols]){                                          // четные стобцы сумма
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++){
            if (j % 2 && mat[i][j] > 0)
                summa_st += mat[i][j];
        }
    cout << "summa polozhitelnih chisel chetnih stolbcov: " << summa_st << endl;
}


int main() {


    //Заполняем массив
    cout << "Vvedite matricu po 4 elementa v stroke: "<< endl;
    for (int i=0; i<4;i++)
        for (int j=0; j<4; j++) {
            cin >> mat[i][j];
        }
    cout << endl;

    summ_vishe(mat);
    summ_d(mat);
    summ_st(mat);

    cout << "Summa vseh etih elementov: "<< summa_st+summa_d+vishe;

    return 0;
}
