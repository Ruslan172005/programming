#include <iostream>
#include <cmath>
#include <iomanip>

// Задана функцiя
double calculateFunction(double x) {
    return fabs(cos(x) * cos(x) - 0.51) * sin(3 * x - 4) - 4.44 * x;
}

int main() {
    setlocale(LC_ALL, "UKR");
    // Заданi параметри
    int i = 7;
    double h = 0.1 * i;
    double start_x = 0;
    double end_x = i;

    // Табуляцiя та виведення результатiв у виглядi таблицi
    std::cout << "x\t\ty" << std::endl;
    std::cout << "------------------------" << std::endl;
    for (double x = start_x; x <= end_x; x += h) {
        double result = calculateFunction(x);
        std::cout << std::fixed << std::setprecision(2) << x << "\t\t" << result << std::endl;
    }

    // Знаходження суми додатних значень та кiлькостi вiд'ємних
    double positiveSum = 0;
    int negativeCount = 0;
    for (double x = start_x; x <= end_x; x += h) {
        double result = calculateFunction(x);
        if (result > 0) {
            positiveSum += result;
        }
        else if (result < 0) {
            negativeCount++;
        }
    }

    // Виведення результатiв пiдрахунку
    std::cout << "\nСума додатних значень: " << positiveSum << std::endl;
    std::cout << "Кiлькiсть вiд'ємних значень: " << negativeCount << std::endl;

    return 0;
}
