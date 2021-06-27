#include <iostream>

// Задание 3. Сортировка массива из 10 элементов методом "пузырька".

int main() {
    //инициализация массива
    int array[] = {4, 2, 5, 1, 3, 6, 7, 6, 8, 9};

    //непосредственно сортировка
    for (int i = 0; i < sizeof(array)/ sizeof(*array) - 1; i++) {

        for (int j = 0; j < sizeof(array)/ sizeof(*array) - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    //вывод массива
    for (int i : array) {
        std::cout << i << " ";
    }
}
