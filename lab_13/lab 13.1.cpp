#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double i = 7.0;
    const double h = 0.7;
    const double epsilon = 1e-10;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "x\t\t y\n";
    std::cout << "---------------------\n";

    double x = 0.0;
    while (x <= i + epsilon) {
        double y = std::abs(std::cos(x) * std::cos(x) - 0.51) * std::sin(3 * x - 4) - 4.44;
        std::cout << x << "\t\t" << y << "\n";
        x += h;
    }

    return 0;
}
