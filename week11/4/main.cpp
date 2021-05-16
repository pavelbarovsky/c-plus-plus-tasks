#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом маленьком роботе.
*/

struct Point {
    float h,x,y;
};

struct Robot {
    Point gabariti;
    float ves;
    float skorost;
    int number;
};

Robot car;
Robot plane;

void ves1();
void ves2();

float v1, v2;   //объёмы

int main() {

    cout << "Vvedite razmeri (h,x,y) robota #1: ";
    car.number = 1;
    cin >> car.gabariti.h >> car.gabariti.x >> car.gabariti.y;

    cout << "Vvedite razmeri (h,x,y) robota #2: ";
    plane.number = 2;
    cin >> plane.gabariti.h >> plane.gabariti.x >> plane.gabariti.y;

    if (ves1 < ves2)
        cout << "Robot car (#1) menshe, ego razmeri " << "(" << car.gabariti.h <<";"<< car.gabariti.x <<";"<< car.gabariti.y << ")";
    else
        cout << "Robot plane (#2) menshe, ego razmeri " << "(" << plane.gabariti.h <<";"<< plane.gabariti.x <<";"<< plane.gabariti.y << ")";

    return 0;
}

void ves1 () {
    v1 = car.gabariti.h * car.gabariti.x * car.gabariti.y;
}

void ves2 () {
    v2 = plane.gabariti.h * plane.gabariti.x * plane.gabariti.y;
}
