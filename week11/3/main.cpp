#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом быстром роботе.
*/

struct Robot {
    float gabariti;
    float ves;
    float skorost;
    int number;
};

Robot car;
Robot plane;

int main() {

    cout << "Vvedite skorost robota #1: ";
    car.number = 1;
    cin >> car.skorost;

    cout << "Vvedite skorost robota #2: ";
    plane.number = 2;
    cin >> plane.skorost;

    if (car.skorost > plane.skorost)
        cout << "Robot car (#1) bistree, ego skorost " << car.skorost << " km/h";
    else
        cout << "Robot plane (#2) bistree, ego skorost " << plane.skorost << " km/h";

    return 0;
}

