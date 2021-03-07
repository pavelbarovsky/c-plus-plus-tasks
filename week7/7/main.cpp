#include <iostream>
#include <cmath>
using namespace std;

/*
 -1/x+1/2x+1/3x+...+1/nx Вариант 3, задача 3g. Пользователь задаёт число n и Х. Посчитать y:
*/

int main()
{

    float x,n,sum;
    int i=1;
    sum=0;

    cout << "-1/x+1/2x-1/3x+...+1/nx" << endl;
    cout << "Vvedite x and do kakogo chisla" << endl;
    cin >> x >> n;

            for (i=1; i<=n; i++) {
        if (i % 2==1)
            sum = sum-(float)1/(i*x);
        else
            sum = sum+(float)1/(i*x);
}
    cout << sum << endl;

}
