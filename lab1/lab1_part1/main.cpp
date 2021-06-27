#include <iostream>

/* Задание 1. Написать программу, которая заменяет все четные числа
 * в целочисленном статическом массиве на 0. (массив из 10 элементов)
 */

int main() {

    int array[10] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    for (int & element : array) {
        if (element % 2 == 0) element = 0;
        std::cout << element << " ";
    }

}
