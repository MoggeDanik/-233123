#include <iostream>
#include <vector>

bool isPalindrome(int n) {
    if (n < 0) return false;
    int original = n;
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

std::vector<int> findPalindromes(int N) {
    std::vector<int> palindromes;
    for (int i = 0; i <= N; ++i) {
        if (isPalindrome(i)) {
            palindromes.push_back(i);
        }
    }
    return palindromes;
}

int main() {
    int N;
    std::cout << "Введите N: ";
    std::cin >> N;
    
    auto palindromes = findPalindromes(N);
    std::cout << "Числа-перевертыши до " << N << ": ";
    for (int n : palindromes) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    std::cout << "Всего: " << palindromes.size() << " чисел" << std::endl;
    
    return 0;
}
