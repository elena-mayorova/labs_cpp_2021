#include <iostream>

/* Задание 2. Ввод символа с клавиатуры (с проверкой что это именно символ),
 * ввод строки с клавиатуры (с проверкой что это именно строка).
 * Вывод в консоль номера, который символ занимает в строке, если он там есть.
 * Если нет — вывод сообщения об отсутствии символа.
 * */

int main() {
    std::cout<<"Введите один символ:\n";
    std::string userChar;
    do {
        std::cin >> userChar;
        if (userChar.size() > 1) {
            std::cout<<"Ошибка! Введите один символ:\n";
            userChar.clear();
        }
        else
            break;
    } while (true);

    std::cout<<"Введите строку:\n";
    std::string userString;
    do {
        std::cin >> userString;
        if (userString.size() < 2) {
            std::cout<<"Ошибка! Введите строку:\n";
            userString.clear();
        }
        else
            break;
    } while (true);

    int charPosition = userString.find(userChar);
    if (charPosition < 0) std::cout << "Символа в строке нет.\n";
    else std::cout << "Символ занимает " << charPosition << " позицию";

}
