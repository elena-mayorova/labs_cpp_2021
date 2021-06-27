#include <iostream>

// Задание 1. Исключение из массива всех отрицательных чисел

int main() {
    //инициализация массива
    int array[] = {4, 2, -5, 1, -3, 6, -7, 6, -8, 9};

    //удаление из массива отрицательных элементов
    int count = 0;

    for (int i = 0; i < sizeof(array)/ sizeof(*array) - 1 - count; i++)
    {
        if (array[i] < 0)
        {
            count++;
            for (int j = i; j < sizeof(array)/ sizeof(*array) - 1; j++)
            {
                array[j] = array[j + 1];
            }
            i--;
        }
    }
    //вывод измененного массива
    for (int i = 0; i < sizeof(array)/ sizeof(*array) - 1 - count; i++)
    {
        std::cout << array[i] << " ";
    }
}
