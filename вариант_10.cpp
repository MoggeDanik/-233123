#include <iostream>
#include <vector>

std::vector<int> findNumbersWithDigitSum(int N) {
    std::vector<int> result;
    for (int i = 100; i <= 999; ++i) {
        int sum = (i / 100) + ((i / 10) % 10) + (i % 10);
        if (sum == N) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int N;
    std::cout << "Введите сумму цифр N (1-27): ";
    std::cin >> N;
    
    if (N < 1 || N > 27) {
        std::cout << "N должно быть от 1 до 27!" << std::endl;
        return 1;
    }
    
    auto numbers = findNumbersWithDigitSum(N);
    std::cout << "Трехзначные числа с суммой цифр " << N << ": ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    std::cout << "Всего: " << numbers.size() << " чисел" << std::endl;
    
    return 0;
}
