#include <iostream>
#include <string>

struct Car {
    std::string model;
    int year;
    double price;
    std::string color;
};

int main() {
    setlocale(LC_ALL, "UKR");
    const int arraySize = 6;
    Car carArray[arraySize] = {
        {"Toyota Camry", 2000, 15000.0, "Blue"},
        {"Honda Accord", 2001, 16000.0, "Red"},
        {"Ford Mustang", 2002, 20000.0, "Black"},
        {"Chevrolet Malibu", 2001, 17000.0, "Red"},
        {"Nissan Altima", 2003, 18000.0, "Silver"},
        {"BMW 3 Series", 2001, 25000.0, "Red"}
    };

    // Виведення інформації про всі автомобілі
    std::cout << "Інформація про автомобілі на складі:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Модель: " << carArray[i].model << ", Рік: " << carArray[i].year
            << ", Ціна: " << carArray[i].price << ", Колір: " << carArray[i].color << "\n";
    }

    // Знаходження і виведення на екран автомобілів червоного кольору, випущених у 2001 році
    std::cout << "\nАвтомобілі червоного кольору, випущені у 2001 році:\n";
    for (int i = 0; i < arraySize; ++i) {
        if (carArray[i].color == "Red" && carArray[i].year == 2001) {
            std::cout << "Модель: " << carArray[i].model << ", Рік: " << carArray[i].year
                << ", Ціна: " << carArray[i].price << "\n";
        }
    }

    return 0;
}
