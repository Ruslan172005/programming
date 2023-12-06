#include <iostream>
#include <cmath>
#include <vector>

int main() {
    setlocale(LC_ALL, "UKR");
    std::vector<int> profitable_years;
    for (int k = 2000; k <= 2010; k++) {
        double x = k - 7;
        double y_k = 100 * cos(2.1 * x) * sin(abs(x)) / 0.15 - 5.8;
        std::cout << "Рік: " << k << ", Прибуток: " << y_k << std::endl;
        if (y_k > 200 && y_k < 700) {
            profitable_years.push_back(k);
        }
    }
    std::cout << "Кількість років з прибутком від 200 до 700 у.о.: " << profitable_years.size() << std::endl;
    std::cout << "Це були роки: ";
    for (int year : profitable_years) {
        std::cout << year << " ";
    }
    return 0;
}
