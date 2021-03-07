#include <iostream>
#include <iomanip> // чтобы работал precision
using namespace std;
/*
Вар 3, задача 2с. Протабулировать функцию y=-2*x*x+3*x-1 (шаг и диапазон задаёт пользователь):
 */
int main()
{
    float sh,x1,x,y;
        cout << "Vvedite shag: ";
        cin >> sh;
        cout << "Vvedite nachalo diapazona: ";
        cin >> x;
        cout << "Vvedite konec diapazona: ";
        cin >> x1;
 // заголовок таблицы
    cout << "\t x \t \t y" <<endl;
    cout.precision(5);
        while (x <= x1){
            y = -2*x*x+3*x-1;
        cout << "\t"
    << x << "\t\t" << y << endl;
    x+=sh;
  }
  return 0;
 }
