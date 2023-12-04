#include <iostream>
#include <fstream>
#include <vector>

int main() {
    setlocale(LC_ALL, "UKR");
    double A, B;
    std::cout << "Введіть число A: ";
    std::cin >> A;
    std::cout << "Введіть число B: ";
    std::cin >> B;

    std::ifstream inputFile("input.txt");  // Припустимо, що дані знаходяться у файлі input.txt

    if (!inputFile) {
        std::cerr << "Не вдалося відкрити файл для читання.\n";
        return 1;
    }

    double number;
    std::vector<double> numbersToRemove;

    // Зчитування чисел з файлу та визначення, які числа видаляти
    while (inputFile >> number) {
        if (number > A && number < B) {
            numbersToRemove.push_back(number);
        }
    }

    inputFile.close();  // Закриваємо файл

    // Перезапис файлу, виключаючи числа, які потрібно видалити
    std::ofstream outputFile("output.txt");  // Файл для запису оновленого списку
    if (!outputFile) {
        std::cerr << "Не вдалося відкрити файл для запису.\n";
        return 1;
    }

    inputFile.open("input.txt");  // Відкриваємо файл знову для зчитування

    while (inputFile >> number) {
        bool shouldRemove = false;
        for (double num : numbersToRemove) {
            if (number == num) {
                shouldRemove = true;
                break;
            }
        }

        if (!shouldRemove) {
            outputFile << number << " ";
        }
    }

    inputFile.close();
    outputFile.close();

    // Виведення кількості видалених чисел
    std::cout << "Кількість видалених чисел: " << numbersToRemove.size() << std::endl;

    return 0;
}
