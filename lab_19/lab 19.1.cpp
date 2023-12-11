#include <iostream>
#include <cmath>
#include <vector>

// Визначаємо функцію для обчислення значення a_kn
double a_kn(int i, int k, int n) {
    double x = i * k * n;
    return std::abs(std::sin(x * x / 1.5 - 2)) + 11.73 * std::cos(1.6 * x - 1) + std::sin(13.4) * std::cos(std::abs(x)) * std::sin((x * x - 2.25));
}

int main() {
    setlocale(LC_ALL, "UKR");
    std::vector<std::vector<double>> array(4, std::vector<double>(4));
    int count = 0;
    double sum = 0;

    // Заповнюємо масив
    for (int k = 1; k <= 4; k++) {
        for (int n = 1; n <= 4; n++) {
            array[k - 1][n - 1] = a_kn(7, k, n);
            if (array[k - 1][n - 1] > 3) count++;
            if (array[k - 1][n - 1] < 9) sum += array[k - 1][n - 1];
        }
    }

    // Виводимо масив
    for (int k = 0; k < 4; k++) {
        for (int n = 0; n < 4; n++) {
            std::cout << array[k][n] << " ";
        }
        std::cout << std::endl;
    }

    // Виводимо кількість елементів більших за 3 та суму елементів менших за 9
    std::cout << "Кількість елементів більших за 3: " << count << std::endl;
    std::cout << "Сума елементів менших за 9: " << sum << std::endl;

    return 0;
}
