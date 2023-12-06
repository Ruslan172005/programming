#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    setlocale(LC_ALL, "UKR");
    double start = 0.0;
    double end = 1.0;
    double step = 0.1;
    double x, y, sumPositive = 0.0;
    int countNegative = 0;

    std::cout << std::setw(10) << "x" << std::setw(15) << "y" << std::endl;
    std::cout << "---------------------" << std::endl;

    for (x = start; x <= end; x += step) {
        y = std::fabs(std::cos(x * x - 0.51) * std::sin(3 * x - 4) - 4.44);

        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setw(10) << x << std::setw(15) << y << std::endl;

        // Знаходження суми додатних значень та кількості від'ємних
        if (y > 0) {
            sumPositive += y;
        }
        else {
            countNegative++;
        }
    }

    std::cout << "---------------------" << std::endl;
    std::cout << "Сума додатних значень: " << sumPositive << std::endl;
    std::cout << "Кількість від'ємних значень: " << countNegative << std::endl;

    return 0;
}
