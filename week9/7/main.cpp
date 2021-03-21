#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

/*
Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
*/

int main(){

    ofstream fout;
    fout.open("out.txt");

    int i=0;
    int mas;
    int n=10;

    cout << "Vvedite 10 chisel" << endl;
        for (i=0;i<n+1;i++) {
            cin >> mas;
            if (mas % 2 != 0)
                cout << 3+mas << " ";
                else
                    cout << 2*mas << " ";

    fout << mas << " ";
        }

        fout << mas << " ";
        fout.close();

    return 0;
}
