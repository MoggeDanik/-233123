#include <iostream>

int main() {
    // Для float
    float f = 1.0f;
    float eps_float = 1.0f;
    while (1.0f + eps_float / 2.0f > 1.0f) {
        eps_float /= 2.0f;
    }
    
    float zero_float = 1.0f;
    while (zero_float / 2.0f > 0.0f) {
        zero_float /= 2.0f;
    }
    
    std::cout << "Для float:" << std::endl;
    std::cout << "  Машинный ноль: " << zero_float << std::endl;
    std::cout << "  Машинный эпсилон: " << eps_float << std::endl;
    
    // Для double
    double d = 1.0;
    double eps_double = 1.0;
    while (1.0 + eps_double / 2.0 > 1.0) {
        eps_double /= 2.0;
    }
    
    double zero_double = 1.0;
    while (zero_double / 2.0 > 0.0) {
        zero_double /= 2.0;
    }
    
    std::cout << "\nДля double:" << std::endl;
    std::cout << "  Машинный ноль: " << zero_double << std::endl;
    std::cout << "  Машинный эпсилон: " << eps_double << std::endl;
    
    return 0;
}
