#include <iostream>

/* Составить программу, которая будет считывать введенное пятизначное число.
 * После чего, каждую цифру этого числа необходимо вывести в новой строке
 * */

int main() {
    //ввод пятизначного числа с проверкой того, что оно пятизначное
    std::cout << "Введите пятизначное число:" << std::endl;
    int number;
    do {
        std::cin >> number;
        if (number / 10000 >= 1 && number / 10000 < 10) {
            break;
        } else {
            std::cout << "Неверная разраядность. Введите пятизначное число:" << std::endl;
        }
    } while(true);

    //вывод цифр введенного числа на отдельных строках в обратном порядке
    std::cout << number % 10 << std::endl;
    std::cout << number / 10 % 10 << std::endl;
    std::cout << number / 100 % 10 << std::endl;
    std::cout << number / 1000 % 10 << std::endl;
    std::cout << number / 10000 << std::endl;
}
