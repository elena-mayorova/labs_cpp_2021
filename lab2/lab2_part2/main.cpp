#include <iostream>
#include <ctime>
// Задание 2. Нахождение случайного числа в заданном диапазоне.

int main() {
    int a;
    int b;
    std::cout << "Левая граница: ";
    std::cin >> a;
    std::cout << "Правая граница: ";
    std::cin >> b;
    srand( time( 0 ) ); // автоматическая рандомизация
    std::cout << "Случайное число = " << a + rand() % b << std::endl;
}
