#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    const int N = 10000;
    const char* filename = "numbers.bin";
    
    // Запись в бинарный файл
    std::ofstream out(filename, std::ios::binary);
    if (!out.is_open()) {
        std::cout << "Не удалось создать файл" << std::endl;
        return 1;
    }
    
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < N; ++i) {
        int num = (rand() % 2 == 0) ? -1 : 1;
        out.write(reinterpret_cast<const char*>(&num), sizeof(int));
    }
    out.close();
    
    // Чтение из бинарного файла в динамическую память
    std::ifstream in(filename, std::ios::binary);
    if (!in.is_open()) {
        std::cout << "Не удалось открыть файл" << std::endl;
        return 1;
    }
    
    int* arr = new int[N];
    in.read(reinterpret_cast<char*>(arr), N * sizeof(int));
    in.close();
    
    // Подсчет суммы
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += arr[i];
    }
    
    std::cout << "Сумма " << N << " чисел (-1 и 1): " << sum << std::endl;
    std::cout << "Количество единиц: " << (N + sum) / 2 << std::endl;
    std::cout << "Количество минус единиц: " << (N - sum) / 2 << std::endl;
    
    delete[] arr;
    
    return 0;
}
