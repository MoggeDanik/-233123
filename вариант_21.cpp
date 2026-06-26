#include <iostream>

// Fn+2 = 2Fn+1 - Fn, F1 = 2, F0 = 1
double sequence(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;
    return 2 * sequence(n - 1) - sequence(n - 2);
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    
    std::cout << "F(" << n << ") = " << sequence(n) << std::endl;
    
    std::cout << "Первые 10 элементов последовательности: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << sequence(i) << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
