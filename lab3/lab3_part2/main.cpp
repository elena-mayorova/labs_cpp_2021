#include <iostream>
#include <string>
#include <algorithm>


// Задание 2. Нахождение всех гласных в какой-нибудь строке и вывод их на экран.

int main() {
    std::string s;

    //получение строки из консоли
    getline(std::cin, s);

    //перевод букв в строчные
    std::transform(s.begin(), s.end(),s.begin(), ::tolower);
    std::string result = "";

    //поиск гласных и добавление их в результирующую строку
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') {
            result += s[i];
        }
    }
    //вывод результирующей строки
    std::cout << result;
}
