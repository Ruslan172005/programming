#include <iostream>
#include <string>

void bubbleSort(std::string array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            // Порівнюємо перші літери рядків
            if (array[j][0] > array[j + 1][0]) {
                // Міняємо місцями, якщо потрібно
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {
    const int arraySize = 5;  // Припустимо, що масив має розмір 5
    std::string stringArray[arraySize] = { "abc", "xyz", "def", "ghi", "jkl" };

    // Сортування за першою літерою в абетковому порядку
    bubbleSort(stringArray, arraySize);

    // Виведення відсортованого масиву
    std::cout << "Відсортований масив:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << stringArray[i] << "\n";
    }

    return 0;
}
