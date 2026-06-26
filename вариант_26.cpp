#include <iostream>
#include <fstream>
#include <string>

bool compareFiles(const std::string& file1, const std::string& file2) {
    std::ifstream f1(file1), f2(file2);
    if (!f1.is_open() || !f2.is_open()) return false;
    
    char c1, c2;
    while (f1.get(c1) && f2.get(c2)) {
        if (c1 != c2) return false;
    }
    
    // Проверяем, достигли ли конца оба файла
    if (f1.get(c1) || f2.get(c2)) return false;
    
    return true;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Использование: " << argv[0] << " файл1 файл2" << std::endl;
        return 1;
    }
    
    if (compareFiles(argv[1], argv[2])) {
        std::cout << "Файлы совпадают" << std::endl;
    } else {
        std::cout << "Файлы различаются" << std::endl;
    }
    
    return 0;
}
