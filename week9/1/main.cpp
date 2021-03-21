#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Сгенерировать массив со случайными числами в диапазоне [-10;10]
*/


int main()
{

    ofstream fout;
    fout.open("out.txt");

   int a[10];
   int i;

   srand(time(0)); // инициализация генерации случайных чисел

   for (i = 0; i < 10; i++)
     a[i] = rand() % 21 - 10;
   for (i = 0; i < 10; i++) {
     cout<<a[i]<<" ";

   fout << a[i] << " ";

}
   fout.close();
}



