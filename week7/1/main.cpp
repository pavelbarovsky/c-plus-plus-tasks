#include <iostream>
int main()

/*
Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь.
 */

{
    float N;
    std::cout << "Vvedite kolichestvo strok:"<< std::endl;
    std::cin >> N;
        for(int i=1; i < N+1; i++){
            for(int j=0; j < i; j++)
        std::cout << 0;
            std::cout << std::endl;
 }
    std::cout << std::endl;

 return 0;
}

