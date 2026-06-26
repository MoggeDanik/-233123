#include <iostream>
#include <cmath>
#include <vector>

double vectorLength(const std::vector<double>& vector) {
    double sum = 0.0;
    for (double val : vector) {
        sum += val * val;
    }
    return std::sqrt(sum);
}

int main() {
    std::vector<double> vec;
    int n;
    
    std::cout << "Введите размерность вектора: ";
    std::cin >> n;
    
    vec.resize(n);
    std::cout << "Введите " << n << " элементов вектора: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }
    
    double length = vectorLength(vec);
    std::cout << "Длина вектора = " << length << std::endl;
    
    return 0;
}
