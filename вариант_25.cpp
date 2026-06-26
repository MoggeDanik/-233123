#include <iostream>
#include <fstream>
#include <string>

int countLines(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Не удалось открыть файл: " << filename << std::endl;
        return -1;
    }
    
    int lines = 0;
    std::string line;
    while (std::getline(file, line)) {
        ++lines;
    }
    file.close();
    return lines;
}

int main() {
    std::string filename;
    std::cout << "Введите имя файла: ";
    std::cin >> filename;
    
    int lines = countLines(filename);
    if (lines >= 0) {
        std::cout << "Количество строк в файле: " << lines << std::endl;
    }
    
    return 0;
}
