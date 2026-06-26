#include <iostream>
#include <cmath>
#include <functional>

double derivative(const std::function<double(double)>& f, double x, double h = 1e-7) {
    return (f(x + h) - f(x - h)) / (2 * h);
}

int main() {
    double x;
    std::cout << "Введите точку x: ";
    std::cin >> x;
    
    // f(x) = sin(x)
    double deriv = derivative([](double x) { return std::sin(x); }, x);
    
    std::cout << "Производная sin(x) в точке x = " << x << ": " << deriv << std::endl;
    std::cout << "cos(" << x << ") = " << std::cos(x) << std::endl;
    
    return 0;
}
