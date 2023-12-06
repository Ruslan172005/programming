#include <iostream>
#include <fstream>
#include <vector>

// Функція для зчитування матриці з файлу
std::vector<std::vector<int>> readMatrixFromFile(const std::string& filename, int& n) {
    std::ifstream file(filename);
    file >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            file >> matrix[i][j];
        }
    }

    return matrix;
}

// Функція для запису матриці у файл
void writeMatrixToFile(const std::string& filename, const std::vector<std::vector<int>>& matrix) {
    std::ofstream file(filename);

    for (const auto& row : matrix) {
        for (int element : row) {
            file << element << " ";
        }
        file << std::endl;
    }
}

// Функція для обчислення матриці C
std::vector<std::vector<int>> calculateMatrixC(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int n = A.size();
    std::vector<std::vector<int>> C(n, std::vector<int>(n));

    // Реалізуйте свої обчислення матриці C тут, використовуючи A і B

    return C;
}

int main() {
    int n;

    // Зчитати матриці A та B з файлів
    std::vector<std::vector<int>> A = readMatrixFromFile("a.txt", n);
    std::vector<std::vector<int>> B = readMatrixFromFile("b.txt", n);

    // Обчислити матрицю C
    std::vector<std::vector<int>> C = calculateMatrixC(A, B);

    // Записати результат у файл
    writeMatrixToFile("c.txt", C);

    std::cout << "Результати обчислень збережено у файлі c.txt." << std::endl;

    return 0;
}
