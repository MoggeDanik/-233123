#include <iostream>
#include <cmath>
#include <functional>

std::pair<double, double> findMax(const std::function<double(double)>& f, 
                                  double a, double b, int steps = 1000) {
    double step = (b - a) / steps;
    double maxX = a;
    double maxVal = f(a);
    
    for (int i = 1; i <= steps; ++i) {
        double x = a + i * step;
        double val = f(x);
        if (val > maxVal) {
            maxVal = val;
            maxX = x;
        }
    }
    return {maxX, maxVal};
}

int main() {
    double a, b;
    std::cout << "Введите интервал [a, b]: ";
    std::cin >> a >> b;
    
    auto result = findMax([](double x) { return std::sin(x) * std::cos(x); }, a, b);
    
    std::cout << "Максимум f(x) = sin(x)*cos(x) на [" << a << ", " << b << "]:" << std::endl;
    std::cout << "x = " << result.first << ", f(x) = " << result.second << std::endl;
    
    return 0;
}
