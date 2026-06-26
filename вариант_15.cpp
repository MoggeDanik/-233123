#include <iostream>
#include <vector>
#include <algorithm>

void sortArray(std::vector<double>& arr) {
    std::sort(arr.begin(), arr.end());
}

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;
    
    std::vector<double> arr(n);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    sortArray(arr);
    
    std::cout << "Отсортированный массив: ";
    for (double val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
