#include <iostream>

/* Задание 3. Расчет определителя матрицы, матрица размером 3 на 3.
 * Ввод чисел построчно. Числа только целые.
 * */

int main() {

    int rows = 3;
    int cols = 3;

    // выделение памяти под массив
    int **array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    // инициализация элементов
    std::cout << "Введите элементы матрицы 3*3:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> array[i][j];
        }
    }

    // вывод массива
    std::cout << "Введенная матрица" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }

    int determinant = array[0][0] * array[1][1] * array[2][2]
                    - array[0][0] * array[1][2] * array[2][1]
                    - array[0][1] * array[1][0] * array[2][2]
                    + array[0][1] * array[1][2] * array[2][0]
                    + array[0][2] * array[1][0] * array[2][1]
                    - array[0][2] * array[1][1] * array[2][0];

    std::cout << "Определитель матрицы = " << determinant << "\n";

    delete[] array;


    /* Значения для проверки
     * d(1 2 3 4 5 6 7 8 9) = 0
     * d(1 4 1 2 12 4 3 1 1) = 14
     * d(2 4 1 4 -6 4 -30 4 4) = -788
     * */

}
