#include <iomanip> // чтобы работал precision
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
/*
Вар 3, задача 2n. Протабулировать функцию y=sqrt(2+3*x)+72*x+tan(4*x+31) (шаг и диапазон задаёт пользователь):
 */
int main()
{

    std::ifstream fin;
    std::ofstream fout;
    fin.open("in.txt");
    fout.open("out.txt");

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
            y = sqrt(2+3*x)+72*x+tan(4*x+31);
        cout << "\t"
    << x << "\t\t" << y << endl;
    x+=sh;
  }
  return 0;

  fin >> sh >> x1 >> x;
  fout << x;
  fout << y;
  fin.close();
  fout.close();

 }

