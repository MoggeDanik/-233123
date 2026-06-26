#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void sortStrings(std::vector<std::string>& strings) {
    std::sort(strings.begin(), strings.end());
}

int main() {
    int n;
    std::cout << "Введите количество строк: ";
    std::cin >> n;
    std::cin.ignore();
    
    std::vector<std::string> strings(n);
    std::cout << "Введите строки:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, strings[i]);
    }
    
    sortStrings(strings);
    
    std::cout << "Отсортированные строки:" << std::endl;
    for (const std::string& s : strings) {
        std::cout << s << std::endl;
    }
    
    return 0;
}
