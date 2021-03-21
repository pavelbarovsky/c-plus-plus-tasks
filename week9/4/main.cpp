#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Найти наибольший/наименьший элемент массива и его номер по порядку
*/

const int n = 20;

int poisk_max_in(int mas[]);
int poisk_min_in(int mas[]);
int poisk_max_el(int mas[]);
int poisk_min_el(int mas[]);

int main() {

    int mas[n];
    srand(time(0));

        for(int i=0; i<n; i++) {
            mas[i] = rand() % 21 - 10;
                cout << "\n" << "element[" << i << "] = " << mas[i];
        }

    cout << endl;
    cout << endl;
        cout <<"Max index: " << poisk_max_in(mas) << endl;
        cout <<"Min index: " << poisk_min_in(mas) << endl;
        cout <<"Max element: " << poisk_max_el(mas) << endl;
        cout <<"Min element: " << poisk_min_el(mas) << endl;
    return 0;
}

int poisk_max_in(int mas[]) {  // поиск индекса максимального значения в массиве
    int maxIndex = 0;
    int maxElement = 0;
    for(int i=0; i<n; i++) {
        if(mas[i] > maxElement) {
            maxElement = mas[i];
            maxIndex = i;
        }
    }
return maxIndex;
}


int poisk_min_in(int mas[]) {  // поиск индекса минимального значения в массиве
    int minIndex = 0;
    int minElement = 0;
    for(int i=0; i<n; i++) {
        if(mas[i] < minElement) {
            minElement = mas[i];
            minIndex = i;
        }
    }
return minIndex;
}


int poisk_max_el(int mas[]) {  // поиск максимального значения в массиве
    int maxElement = 0;
    int minIndex = 0;
    for(int i=0; i<n; i++) {
        if(mas[i] > maxElement) {
            maxElement = mas[i];
            minIndex = i;
        }
    }
return maxElement;
}


int poisk_min_el(int mas[]) {  // поиск минимального значения в массиве
    int minElement = 0;
    int minIndex = 0;
    for(int i=0; i<n; i++) {
        if(mas[i] < minElement) {
            minElement = mas[i];
            minIndex = i;
        }
    }
return minElement;
}
