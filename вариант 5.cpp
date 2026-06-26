#include <iostream>
#include <vector>

std::vector<int> findPrimes(int N) {
    std::vector<int> primes;
    if (N < 2) return primes;
    
    std::vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i <= N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= N; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int N;
    std::cout << "Введите N: ";
    std::cin >> N;
    
    std::vector<int> primes = findPrimes(N);
    std::cout << "Простые числа до " << N << ": ";
    for (int p : primes) {
        std::cout << p << " ";
    }
    std::cout << std::endl;
    std::cout << "Всего: " << primes.size() << " чисел" << std::endl;
    
    return 0;
}
