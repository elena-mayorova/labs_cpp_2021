#include <iostream>
#include <cmath>

// Задание 1. Решение квадратного уравнения

int main() {
    int a;
    int b;
    int c;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    int d = b * b - 4 * a * c;

    if (d < 0) {
        std::cout << "Нет действительных корней";
    }
    else if (d == 0) {
        std::cout << "Уравнение имеет 1 действительный корень, равный " << -b/(2 * a);
    }
    else {
        std::cout << "Корень 1 = " << (-b + sqrt(d))/(2*a) << "\n";
        std::cout << "Корень 2 = " << (-b - sqrt(d))/(2*a);
    }
    /* Значения для проверки:
     * Нет корней: a = 1; b = 1; c = 1
     * 1 корень: a = 1; b = -6; c = 9
     * 2 корня: a = 1; b = 10; c = 9
     * */
}
