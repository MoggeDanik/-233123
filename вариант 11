#include <iostream>
#include <vector>
#include <unordered_set>

bool hasAllDistinctDigits(int n) {
    if (n < 0) n = -n;
    if (n < 10) return true;
    
    std::unordered_set<int> digits;
    while (n > 0) {
        int digit = n % 10;
        if (digits.find(digit) != digits.end()) {
            return false;
        }
        digits.insert(digit);
        n /= 10;
    }
    return true;
}

std::vector<int> findNumbersWithDistinctDigits(int N) {
    std::vector<int> result;
    for (int i = 0; i <= N; ++i) {
        if (hasAllDistinctDigits(i)) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int N;
    std::cout << "Введите N: ";
    std::cin >> N;
    
    auto numbers = findNumbersWithDistinctDigits(N);
    std::cout << "Числа с разными цифрами до " << N << ": ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    std::cout << "Всего: " << numbers.size() << " чисел" << std::endl;
    
    return 0;
}
