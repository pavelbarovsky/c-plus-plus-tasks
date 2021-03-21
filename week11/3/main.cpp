#include <iostream>
using namespace std;

/*Объявить сущность и описать её свойства (характеристики вроде роста, цвета,
названия и прочего). Объявить массивы сущностей. Заполнить атрибуты
числовыми и текстовыми значениями (диапазон значений определить
самостоятельно)  ЦВЕТОК
*/

int main() {

    const int n=50;

    struct Cvetok {
       float visota[n];
       string cvet;
       int kolvo_lipestkov[n];
       string nazvanie;
    };

    int cv[100];     // Объявление массива структур mstud
   int kng, i, y;
   cout << "Vvedite kolvo cvetov" << endl;
   cin >> kng;
     for (i=0; i < kng; i++)   // Ввод информации о студентах

       {
   cout << "Vvedite visotu cvetka" << endl;
       cin >> cv[i].visota;          // Ввод регистрационного номера книги
   cout << "Vvedite cvet" << endl;
       cin >> cv[i].cvet;          // Ввод автора книги
   cout << "Vvedite nazvanie knigi" << endl;
       cin >> cv[i].nazvanie;          // Ввод название книги
   cout << "Vvedite kolvo lipestkov" << endl;
       cin >> cv[i].kolvo_lipestkov;          // Ввод года издания книги
     }


   {
   cout << "Vvedite god knigi: ";
   cin >> y;

   for(i = 0; i < kng; ++i)

           {
               if(y>= mstud[i].year)
               cout << mstud[i].id;

           }

   }


   _getch();


}
