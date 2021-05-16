#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*Создайте структуру для хранения комплексных чисел. Структура должна иметь 2
атрибута: вещественную часть и мнимую. Объявите два числа и получите их
значения от пользователя.
Напишите функцию, которая будет возвращать тоже самое число в
тригонометрической форме.
*/

float z,a,b;

struct Kompl {                      // теор.сведения: a - вещ.часть ; b -мнимая часть (домножается на i)
   float re=a;                      // z=a+i*b - алгебраическая форма записи
   float im=b;                      // z=r*(cosф*i*sinф) - тригонометрическая форма записи
   float cosfi;                     // где r=sqrt(a^2+b^2), cosф=a/r, sinф=b/r
   float sinfi;
   float r;                         // можно сделать иначе - искать угол "ф" методом сравнения a и b,
};                                  // подставлять в функции cos и sin данный угол (переведенный в радианы) и считать полученное значение
                                    // но потребуется минимум 8 строк сравнения (a и b) и 8 строк присвоения значения угла "ф"
Kompl chislo;                       // первый способ проще и предоставляет те же значения.

void trig ();

int main() {

    cout << "Vvedite veshestvennuyu chast shisla ";
    cin >> a;
    cout << "Vvedite mnimuyu chat chisla ";
    cin >> b;

    cout << "z="<<a<<"+"<<"i*"<<b<<" - algebraicheskaya forma"<<endl;

    trig();

return 0;
}


void trig () {
    chislo.r=sqrt((a*a)+(b*b));
    chislo.cosfi=(a/chislo.r);
    chislo.sinfi=(b/chislo.r);

    cout << "z="<<chislo.r<<"*("<<chislo.cosfi<<"*i*"<<chislo.sinfi<<")"<<" - trigonometricheskaya forma";
}
