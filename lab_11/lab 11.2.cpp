#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "UKR");
    char workType;
    double x, payment, tax, netPayment;

    // Введення типу робіт
    std::cout << "Введіть тип робіт (A, B або C): ";
    std::cin >> workType;

    // Введення значення x
    std::cout << "Введіть значення x: ";
    std::cin >> x;

    // Розрахунок оплати в залежності від типу робіт
    switch (workType) {
    case 'A':
        payment = 100 * std::cos(x * x + 1) - std::abs(std::sin(2 * x) - 5.76) + 50;
        break;
    case 'B':
        payment = 150 * std::sin(x) - std::pow(std::cos(x), 3) * std::sin(x * x - 4.2) + 4.27 + 100;
        break;
    case 'C':
        payment = 200 * std::abs(std::sin(12 * x) * std::cos(std::abs(2 * x)) / 3) + 4.21 + 135;
        break;
    default:
        std::cout << "Неправильний тип робіт. Введіть A, B або C." << std::endl;
        return 1; // Повернення коду помилки
    }

    // Розрахунок податку та суми до видачі
    if (workType == 'A') {
        tax = 0.1 * payment;
    }
    else if (workType == 'B') {
        tax = 0.15 * payment;
    }
    else {
        tax = 0.2 * payment;
    }

    netPayment = payment - tax;

    // Виведення результатів
    std::cout << "Нарахована сума: " << payment << std::endl;
    std::cout << "Сума податку: " << tax << std::endl;
    std::cout << "Сума до видачі: " << netPayment << std::endl;

    // Використання команди goto
    goto end;

    // Мітка для команди goto
end:

    return 0;
}
