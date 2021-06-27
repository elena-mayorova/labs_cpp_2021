#include <iostream>

/* Написать функцию, подсчитывающую среднее арифметическое целого массива.
 * Предварительно объявив и, при необходимости, инициализировав переменные.
 * */

// функция принимает на вход массив и его размер
// (т.к. функция обрабатывает полученный массив как указатель, поэтому с
// помощью метода sizeof внутри функции определяется не размер массива,
// а размер указателя на массив)
// и возвращает значение среднего арифметического
float average(int array[], int array_size) {

    float sum = 0;
    for (int i = 0; i < array_size; i++) {
        sum += array[i];
    }

    float average = sum / array_size;
    return average;
}

int main() {
    //инициализация массива
    int array[] = {4, 2, -5, 1, -3, 6, -7, 6, -8, 9, 20};

    //вычисление размера массива
    int array_size = sizeof(array)/ sizeof(*array);

    //вызов функции
    std::cout << average(array, array_size);
}
