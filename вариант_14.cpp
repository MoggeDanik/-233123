#include <iostream>
#include <string>

std::string trim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r\f\v");
    if (start == std::string::npos) return "";
    
    size_t end = str.find_last_not_of(" \t\n\r\f\v");
    return str.substr(start, end - start + 1);
}

int main() {
    std::string input;
    std::cout << "Введите строку с пробелами: ";
    std::getline(std::cin, input);
    
    std::string result = trim(input);
    std::cout << "Результат: \"" << result << "\"" << std::endl;
    std::cout << "Длина строки: " << result.length() << std::endl;
    
    return 0;
}
