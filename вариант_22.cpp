#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Нажмите Enter для начала..." << std::endl;
    std::cin.get();
    
    auto start = std::chrono::high_resolution_clock::now();
    
    std::cout << "Нажмите Enter для остановки..." << std::endl;
    std::cin.get();
    
    auto end = std::chrono::high_resolution_clock::now();
    
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Прошло " << duration.count() << " миллисекунд" << std::endl;
    std::cout << "Прошло " << duration.count() / 1000.0 << " секунд" << std::endl;
    
    return 0;
}
