#include <iostream>
#include <cmath>

int main() {
    // Виберемо варіант
    int i = 7;

    // Обчислимо a
    double a = 0;
    for (int k = i + 5; k <= i + 13; ++k) {
        a += fabs(fabs(sin(2 * k - 1.5)) + 3 * sin(4 * k)) + 2.38;
    }

    // Обчислимо b
    double b = 1;
    for (int k = i; k <= i + 8; ++k) {
        b *= cos(k / 2.1 + cos(k) / 1.1 - 8.3 * sin(3 * k + 1));
    }

    // Обчислимо z
    double z = pow(a, b);

    // Виведемо значення i, a, b, z
    std::cout << "i: " << i << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "z: " << z << std::endl;

    return 0;
}
