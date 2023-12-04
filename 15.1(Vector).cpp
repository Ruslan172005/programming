#include <iostream>
#include <vector>
#include <cmath>

int main() {
    const int k = 7;  // Кількість елементів у векторі
    std::vector<double> vectorArray(k);  // Оголошення вектору

    // Утворення та виведення вектору
    std::cout << "Елементи вектору:\n";
    for (int i = 1; i <= k; ++i) {
        double uk = fabs(cos(2 * i) * 3 + 2 * sin(i / 1.2 - 3.4) + 10.51 * cos(fabs(3 * i)));
        vectorArray[i - 1] = uk;  // Заповнення вектору
        std::cout << "u" << i << " = " << uk << "\n";
    }

    // Завдання варіанта: кількість додатних елементів та їхні номери
    int positiveCount = 0;
    double productOfPositives = 1.0;
    std::vector<int> positiveIndexes;

    for (int i = 0; i < k; ++i) {
        if (vectorArray[i] > 0) {
            positiveCount++;
            productOfPositives *= vectorArray[i];

            // Заповнення номерів перших трьох додатних елементів
            if (positiveCount <= 3) {
                positiveIndexes.push_back(i + 1);
            }
        }
    }

    // Виведення результатів завдань
    std::cout << "\nКількість додатних елементів у векторі: " << positiveCount << "\n";

    if (positiveCount >= 3) {
        std::cout << "Добуток перших трьох додатних елементів: " << productOfPositives << "\n";
        std::cout << "Номери цих елементів: ";
        for (int index : positiveIndexes) {
            std::cout << index << ", ";
        }
        std::cout << "\n";
    }
    else {
        std::cout << "Недостатньо додатних елементів для обчислення добутку та визначення їхніх номерів.\n";
    }

    return 0;
}
 
