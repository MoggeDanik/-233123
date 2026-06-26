#include <iostream>
#include <cmath>
#include <functional>

double findZero(const std::function<double(double)>& f, double a, double b, 
                double eps = 1e-10) {
    if (f(a) * f(b) > 0) {
        std::cout << "На отрезке [" << a << ", " << b << "] нет нуля или несколько нулей" << std::endl;
        return 0;
    }
    
    double mid;
    while (b - a > eps) {
        mid = (a + b) / 2;
        if (f(mid) == 0) return mid;
        if (f(a) * f(mid) < 0) {
            b = mid;
        } else {
            a = mid;
        }
    }
    return (a + b) / 2;
}

int main() {
    double a, b;
    std::cout << "Введите отрезок [a, b]: ";
    std::cin >> a >> b;
    
    // f(x) = x^2 - 4 (нули в x = -2 и x = 2)
    double zero = findZero([](double x) { return x*x - 4; }, a, b);
    
    std::cout << "Нуль функции x^2 - 4 на [" << a << ", " << b << "]: " << zero << std::endl;
    std::cout << "Проверка: f(" << zero << ") = " << zero*zero - 4 << std::endl;
    
    return 0;
}
