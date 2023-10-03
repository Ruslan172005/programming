#include <iostream>

using namespace std;
int main() {

	setlocale(LC_ALL, "UKR");

	// Оголошення змінної для збереження числа 27
	int number = 27;

	// Обчислення квадрату числа 27 і збереження його в змінній square
	int square = number * number;

	// Обчислення куба числа 27 і збереження його в змінній cube
	int cube = number * number * number;

	// Виведення результатів на екран
	std::cout << "Квадрат числа 27: " << square << std::endl;
    std::cout << "Куб числа 27: " << cube << std::endl;

	return 0;
}