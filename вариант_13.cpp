#include <iostream>
#include <vector>

bool hasZeroInEachRowAndColumn(const std::vector<std::vector<int>>& matrix) {
    if (matrix.empty() || matrix[0].empty()) return false;
    
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    std::vector<bool> rowHasZero(rows, false);
    std::vector<bool> colHasZero(cols, false);
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                rowHasZero[i] = true;
                colHasZero[j] = true;
            }
        }
    }
    
    for (int i = 0; i < rows; ++i) {
        if (!rowHasZero[i]) return false;
    }
    for (int j = 0; j < cols; ++j) {
        if (!colHasZero[j]) return false;
    }
    return true;
}

int main() {
    int rows, cols;
    std::cout << "Введите количество строк и столбцов: ";
    std::cin >> rows >> cols;
    
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    std::cout << "Введите элементы матрицы:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    
    bool result = hasZeroInEachRowAndColumn(matrix);
    std::cout << "В каждой строке и каждом столбце есть нулевой элемент: " 
              << (result ? "Да" : "Нет") << std::endl;
    
    return 0;
}
