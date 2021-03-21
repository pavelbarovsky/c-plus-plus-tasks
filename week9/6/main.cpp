#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Посчитать количество элементов массива, больших заданного числа
 */

int main(){

    srand(time(0)); // инициализация генерации случайных чисел

    ofstream fout;
    fout.open("out.txt");

    int n =10;
    int mas[n];
    int sum = 0;
    int count = 0;
    int x;

    cout << "Vvedite chislo dlya poiska" << endl;
    cin >> x;

        for(int i = 0; i < n; i++){
            mas[i] = rand() % 21 - 10;
                cout << mas[i] << " ";

        if(mas[i] > x){
            sum += mas[i];
            count ++;
        }
    }
    cout << endl;
    cout << "kolichestvo elementov > " << x << ": " << count << endl;

    fout << count << " ";
    fout.close();

    return 0;
}

