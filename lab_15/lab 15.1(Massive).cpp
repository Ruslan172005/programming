#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "UKR");
    const int k = 7;  // Кількість елементів у масиві
    double array[k];  // Оголошення масиву

    // Утворення та виведення масиву
    std::cout << "Елементи масиву:\n";
    for (int i = 1; i <= k; ++i) {
        double uk = fabs(cos(2 * i) * 3 + 2 * sin(i / 1.2 - 3.4) + 10.51 * cos(fabs(3 * i)));
        array[i - 1] = uk;  // Заповнення масиву
        std::cout << "u" << i << " = " << uk << "\n";
    }

    // Завдання варіанта: кількість додатних елементів та їхні номери
    int positiveCount = 0;
    double productOfPositives = 1.0;
    int positiveIndexes[3] = { 0 };

    for (int i = 0; i < k; ++i) {
        if (array[i] > 0) {
            positiveCount++;
            productOfPositives *= array[i];

            // Заповнення номерів перших трьох додатних елементів
            if (positiveCount <= 3) {
                positiveIndexes[positiveCount - 1] = i + 1;
            }
        }
    }

    // Виведення результатів завдань
    std::cout << "\nКількість додатних елементів у масиві: " << positiveCount << "\n";

    if (positiveCount >= 3) {
        std::cout << "Добуток перших трьох додатних елементів: " << productOfPositives << "\n";
        std::cout << "Номери цих елементів: " << positiveIndexes[0] << ", " << positiveIndexes[1] << ", " << positiveIndexes[2] << "\n";
    }
    else {
        std::cout << "Недостатньо додатних елементів для обчислення добутку та визначення їхніх номерів.\n";
    }

    return 0;
}
