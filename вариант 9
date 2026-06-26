#include <iostream>
#include <vector>
#include <iomanip>

std::vector<std::vector<double>> multiplyMatrices(
    const std::vector<std::vector<double>>& A,
    const std::vector<std::vector<double>>& B) {
    
    int m = A.size();
    int n = A[0].size();
    int k = B[0].size();
    
    std::vector<std::vector<double>> C(m, std::vector<double>(k, 0.0));
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; ++j) {
            for (int l = 0; l < n; ++l) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }
    return C;
}

void printMatrix(const std::vector<std::vector<double>>& M) {
    for (const auto& row : M) {
        for (double val : row) {
            std::cout << std::setw(8) << std::fixed << std::setprecision(2) << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Введите размеры первой матрицы (m n): ";
    int m, n;
    std::cin >> m >> n;
    
    std::cout << "Введите размеры второй матрицы (n2 k): ";
    int n2, k;
    std::cin >> n2 >> k;
    
    if (n != n2) {
        std::cout << "Ошибка: количество столбцов первой матрицы должно равно количеству строк второй!" << std::endl;
        return 1;
    }
    
    std::vector<std::vector<double>> A(m, std::vector<double>(n));
    std::vector<std::vector<double>> B(n, std::vector<double>(k));
    
    std::cout << "Введите элементы первой матрицы:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> A[i][j];
        }
    }
    
    std::cout << "Введите элементы второй матрицы:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            std::cin >> B[i][j];
        }
    }
    
    auto C = multiplyMatrices(A, B);
    std::cout << "Результат:" << std::endl;
    printMatrix(C);
    
    return 0;
}
