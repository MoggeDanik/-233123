#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int ROWS = 100, COLS = 200;
    float** arr = new float*[ROWS];
    for (int i = 0; i < ROWS; ++i) {
        arr[i] = new float[COLS];
    }
    
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            arr[i][j] = -1.0f + static_cast<float>(rand()) / RAND_MAX * 2.0f;
        }
    }
    
    std::cout << "Массив 100x200 заполнен случайными числами от -1 до 1" << std::endl;
    std::cout << "arr[0][0] = " << arr[0][0] << std::endl;
    
    for (int i = 0; i < ROWS; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}
