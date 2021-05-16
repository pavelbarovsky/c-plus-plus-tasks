#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* Реализовать сложение, вычитание, умножение, транспонирование матриц
(разрешается фиксированный размер матриц). */

const int rows = 3;  // строки
const int cols = 3;  // столбцы
int a[rows][cols];   // матрица 1
int b[rows][cols];   // матрица 2
int c[rows][cols];   // матрица 3 умножение
int d[rows][cols];   // матрица 3 транспонирование A
int e[rows][cols];   // матрица 3 транспонирование B

void slozhenie(int a[rows][cols],int b[rows][cols]) {
    cout << "A+B: " << endl;                 // сложение
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            cout << "  " << a[i][j]+b[i][j];
        cout << endl;
    }
    cout << endl;
}

void umnozhenie(int a[rows][cols],int b[rows][cols]) {
    cout << "A*B: " << endl;                 // умножение
    for(int i=0; i<rows; i++){
       for(int j=0; j<cols; j++) {
           c[i][j]=0;
           for(int k=0; k<rows; k++)
               c[i][j]+=a[i][k]*b[k][j];
           cout << "  " << c[i][j];
       }
       cout << endl;
    }
    cout << endl;
}

void vichitanie(int a[rows][cols],int b[rows][cols]) {
    cout << "A-B: " << endl;                 // вычитание
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            cout << "  " << a[i][j]-b[i][j];
        cout << endl;
    }
    cout << endl;
}

void trans_A(int a[rows][cols],int d[rows][cols]) {
    cout << "trans A: "<< endl;             // транспонирование А
    for (int i=0; i<rows; i++){
            for (int j =0; j<cols; j++)
                d[i][j] = a[j][i];
        }
        for (int i=0; i <rows; i++){
            for (int j=0; j<cols; j++)
                cout << d[i][j] << " ";
            cout << endl;
        }
        cout << endl;
}

void trans_B(int b[rows][cols],int e[rows][cols]) {
    cout << "trans B: "<< endl;         // транспонирование В
    for (int i=0; i<rows; i++){
            for (int j =0; j<cols; j++)
                e[i][j] = b[j][i];
        }
        for (int i=0; i <rows; i++){
            for (int j=0; j<cols; j++)
                cout << e[i][j] << " ";
            cout << endl;
        }
}



int main() {

    cout << "Matrica A: "<< endl;           // Заполняем матрицу 1
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++) {
            cin >> a[i][j];
        }
    cout << endl;



    cout << "Matrcica B: "<< endl;          // Заполняем матрицу 2
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++) {
            cin >> b[i][j];
        }
    cout << endl;

slozhenie(a,b);
vichitanie(a,b);
umnozhenie(a,b);
trans_A(a,d);
trans_B(b,e);

return 0;

}
