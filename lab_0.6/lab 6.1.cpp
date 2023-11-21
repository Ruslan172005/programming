#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "UKR");
    double start_value = 1.0;  // Початкове значення міри (1 галон)
    double step = 0.1;        // Крок зміни значення
    int rows = 10;            // Кількість рядків у таблиці

    std::cout << std::setw(15) << "Галон (США)" << std::setw(15) << "Сак" << std::setw(15) << "Літр" << std::endl;

    for (int i = 0; i < rows; i++) {
        double gallons = start_value + i * step;
        double sacks = gallons * 0.0347;
        double liters = gallons * 3.785;

        std::cout << std::setw(15) << std::fixed << std::setprecision(2) << gallons;
        std::cout << std::setw(15) << std::fixed << std::setprecision(2) << sacks;
        std::cout << std::setw(15) << std::fixed << std::setprecision(2) << liters << std::endl;
    }

    return 0;
}
