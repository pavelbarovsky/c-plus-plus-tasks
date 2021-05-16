#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/* Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
    a. Двумерное изображение. Изображение состоит из пикселей. Каждый пиксель
    характеризуется яркостью цветовых каналов: красный, синий, зелёный.
*/

const int rows = 2;  // строки
const int cols = 2;  // столбцы


struct Picture {
float r,g,b;
};

Picture mat[rows][cols];
Picture pix;

void vivod() {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++)
            cout << "r: " << mat[i][j].r << '\t';
            cout << endl;
    for (int j=0; j<cols; j++)
        cout <<"g: " << mat[i][j].g << '\t';
        cout << endl;
    for (int j=0; j<cols; j++)
        cout <<"b: " << mat[i][j].b << '\t';
        cout << endl;
    cout << endl;
    }
}

int main() {

    for(int i=0; i<rows; i++)
        for (int j=0; j<cols; j++) {
            cout << "Pixel " << i+1 << "." << j+1 << endl;
            cout << "red: ";
            cin >> pix.r;
            cout << "green: ";
            cin >> pix.g;
            cout << "blue: ";
            cin >> pix.b;
        mat[i][j] = pix;
        cout << endl;
     }
cout << endl;

vivod();

}
