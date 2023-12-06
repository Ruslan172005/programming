#include <iostream>
#include <string>

// Структура для представлення iнформацiї про країну
struct Country {
    std::string name;
    int population;
    double area;
};

// Функцiя для виведення iнформацiї про країну
void printCountry(const Country& country) {
    std::cout << "Назва країни: " << country.name << std::endl;
    std::cout << "Населення: " << country.population << " осiб" << std::endl;
    std::cout << "Площа: " << country.area << " км^2" << std::endl;
    std::cout << "-----------------------------" << std::endl;
}

int main() {
    setlocale(LC_ALL, "UKR");
    const int arraySize = 6; // Розмiр масиву
    Country countries[arraySize]; // Масив записiв про країни

    // iнiцiалiзацiя масиву
    countries[0] = { "Україна", 44000000, 603500 };
    countries[1] = { "США", 331000000, 9834000 };
    countries[2] = { "Китай", 1440000000, 9597000 };
    countries[3] = { "iндiя", 1393000000, 3287000 };
    countries[4] = { "Бразилiя", 209000000, 8516000 };
    countries[5] = { "Єгипет", 104000000, 1002450 };

    // Виведення на екран iнформацiї про всi країни
    std::cout << "iнформацiя про всi країни:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        printCountry(countries[i]);
    }

    // Пошук i виведення країн з населенням бiльше 1 мiльярда
    std::cout << "Країни з населенням бiльше 1 мiльярда:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        if (countries[i].population > 1000000000) {
            printCountry(countries[i]);
        }
    }

    return 0;
}
