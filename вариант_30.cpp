#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    const int WIDTH = 80;
    const int HEIGHT = 24;
    
    int x = WIDTH / 2;
    int y = HEIGHT / 2;
    
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    
    std::cout << "Броуновское движение (шаг 2 пикселя)" << std::endl;
    std::cout << "Нажмите Ctrl+C для выхода" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    
    while (true) {
        clearScreen();
        
        // Отображаем границы
        for (int i = 0; i < WIDTH + 2; ++i) std::cout << "-";
        std::cout << std::endl;
        
        // Рисуем поле с частицей
        for (int i = 0; i < HEIGHT; ++i) {
            std::cout << "|";
            for (int j = 0; j < WIDTH; ++j) {
                if (i == y && j == x) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
            }
            std::cout << "|" << std::endl;
        }
        
        for (int i = 0; i < WIDTH + 2; ++i) std::cout << "-";
        std::cout << std::endl;
        
        std::cout << "Позиция: (" << x << ", " << y << ")" << std::endl;
        
        // Случайное движение с шагом 2
        int dx = (rand() % 3 - 1) * 2; // -2, 0, 2
        int dy = (rand() % 3 - 1) * 2; // -2, 0, 2
        
        x += dx;
        y += dy;
        
        // Проверка границ
        if (x < 0) x = 0;
        if (x >= WIDTH) x = WIDTH - 1;
        if (y < 0) y = 0;
        if (y >= HEIGHT) y = HEIGHT - 1;
        
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    
    return 0;
}
