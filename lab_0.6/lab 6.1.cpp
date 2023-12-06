#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "UKR");
    double start_value;  // Початкове значення мiри (галони)
    double step;        // Крок змiни значення
    int rows;            // Кiлькiсть рядкiв у таблицi

    // Введення вхiдних даних вiд користувача
    std::cout << "Введiть початкове значення мiри (галони): ";
    std::cin >> start_value;

    std::cout << "Введiть крок змiни значення: ";
    std::cin >> step;

    std::cout << "Введiть кiлькiсть рядкiв у таблицi: ";
    std::cin >> rows;

    std::cout << std::setw(15) << "Галон (США)" << std::setw(15) << "Сак" << std::setw(15) << "Лiтр" << std::endl;

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
