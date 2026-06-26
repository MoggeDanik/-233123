#include <iostream>
#include <vector>

int countEven(const std::vector<int>& arr) {
    int count = 0;
    for (int n : arr) {
        if (n % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    int evenCount = countEven(arr);
    std::cout << "Количество четных чисел: " << evenCount << std::endl;
    
    return 0;
}
