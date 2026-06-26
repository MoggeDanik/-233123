#include <iostream>
#include <string>

int lastOccurrence(const std::string& str, char ch) {
    for (int i = str.length() - 1; i >= 0; --i) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::string str;
    char ch;
    
    std::cout << "Введите строку: ";
    std::getline(std::cin, str);
    std::cout << "Введите символ: ";
    std::cin >> ch;
    
    int pos = lastOccurrence(str, ch);
    if (pos != -1) {
        std::cout << "Последнее вхождение символа '" << ch << "' на позиции " << pos << std::endl;
    } else {
        std::cout << "Символ '" << ch << "' не найден" << std::endl;
    }
    
    return 0;
}
