#include <iostream>
#include <cmath>

double f(double x) {
    return std::abs(std::sin(2 * x - 1.5) + 3 * std::sin(4 * x)) + 2.38;
}

int main() {
    char jobType;
    double amount, tax, netAmount;
    int variantNumber = 7; // Ваш номер варіанта

    std::cout << "Введіть тип роботи (A, B, C): ";
    std::cin >> jobType;

    switch (jobType) {
    case 'A':
        amount = 100 * f(variantNumber + 2) + 50;
        tax = amount * 0.10;
        break;
    case 'B':
        amount = 150 * f(variantNumber + 3) + 100;
        tax = amount * 0.15;
        break;
    case 'C':
        amount = 200 * f(variantNumber + 4) + 135;
        tax = amount * 0.20;
        break;
    default:
        std::cout << "Невірний тип роботи.\n";
        return -1;
    }

    netAmount = amount - tax;

    std::cout << "Нарахована сума: " << amount << "\n";
    std::cout << "Сума податку: " << tax << "\n";
    std::cout << "Сума до видачі: " << netAmount << "\n";

    return 0;
}
#include <iostream>
#include <cmath>

double f(double x) {
    return std::abs(std::sin(2 * x - 1.5) + 3 * std::sin(4 * x)) + 2.38;
}

int main() {
    char jobType;
    double amount, tax, netAmount;
    int variantNumber = 7; // Ваш номер варіанта

    std::cout << "Введіть тип роботи (A, B, C): ";
    std::cin >> jobType;

    switch (jobType) {
    case 'A':
        amount = 100 * f(variantNumber + 2) + 50;
        tax = amount * 0.10;
        break;
    case 'B':
        amount = 150 * f(variantNumber + 3) + 100;
        tax = amount * 0.15;
        break;
    case 'C':
        amount = 200 * f(variantNumber + 4) + 135;
        tax = amount * 0.20;
        break;
    default:
        std::cout << "Невірний тип роботи.\n";
        return -1;
    }

    netAmount = amount - tax;

    std::cout << "Нарахована сума: " << amount << "\n";
    std::cout << "Сума податку: " << tax << "\n";
    std::cout << "Сума до видачі: " << netAmount << "\n";

    return 0;
}
