#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Вычислить сумму элементов массива меньших числа 5
 */

int main(){

    srand(time(0)); // инициализация генерации случайных чисел

    ofstream fout;
    fout.open("out.txt");

    int n =10;
    int mas[n];
    int sum = 0;
    int count = 0;

        for(int i = 0; i < n; i++){
            mas[i] = rand() % 21 - 10;
                cout << mas[i] << " ";

        if(mas[i] < 5){
            sum += mas[i];
            count ++;
        }
    }
    cout << " kolichestvo elementov <5 = " << count << endl;
    cout << " sum = " << sum;

    fout << sum << " ";
    fout.close();

    return 0;
}
