#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Создать новый массив из двух других массивов путём: сложения
*/

const int Nmax = 20;

int main()
{
int A[Nmax];
int B[Nmax];
int n;
int i;

    cout << "Razmer massiva: ";
    cin >> n;


    cout << "Massiv 1: " << endl;
        for(i = 0; i < n; i++)
        cin >> A[i];


    cout << "Massiv 2: " << endl;;
        for(i = 0; i < n; i++)
        cin >> B[i];

    cout << "Massiv 1+2: " << endl;
        for(i = 0; i < n; i++)
        cout << B[i]+A[i] << " ";

return 0;
}
