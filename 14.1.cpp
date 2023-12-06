#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "UKR");

    int profitable_years_count = 0;
    int profitable_years[11];

    for (int k = 2000; k <= 2010; k++) {
        double x = k - 7;
        double y_k = 100 * cos(2.1 * x) * sin(std::abs(x)) / 0.15 - 5.8;

        std::cout << "Рік: " << k << ", Прибуток: " << y_k << std::endl;

        if (y_k > 200 && y_k < 700) {
            profitable_years[profitable_years_count] = k;
            profitable_years_count++;
        }
    }

    std::cout << "Кількість років з прибутком від 200 до 700 у.о.: " << profitable_years_count << std::endl;
    std::cout << "Це були роки: ";
    for (int i = 0; i < profitable_years_count; i++) {
        std::cout << profitable_years[i] << " ";
    }

    return 0;
}
