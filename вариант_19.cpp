#include <iostream>
#include <vector>

void factorizeRecursive(int n, int divisor, std::vector<int>& factors) {
    if (n <= 1) return;
    
    if (divisor * divisor > n) {
        factors.push_back(n);
        return;
    }
    
    if (n % divisor == 0) {
        factors.push_back(divisor);
        factorizeRecursive(n / divisor, divisor, factors);
    } else {
        factorizeRecursive(n, divisor + 1, factors);
    }
}

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    if (n > 1) {
        factorizeRecursive(n, 2, factors);
    }
    return factors;
}

int main() {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;
    
    std::vector<int> factors = factorize(n);
    std::cout << n << " = ";
    for (size_t i = 0; i < factors.size(); ++i) {
        std::cout << factors[i];
        if (i < factors.size() - 1) std::cout << " * ";
    }
    std::cout << std::endl;
    
    return 0;
}
