#include <iostream>
using namespace std;

double ConvertToFahrenheit(double celsius) {
    return 1.8 * celsius + 32.0;
}

void PrintTemp() {
    double celsius;
    cout << "Будь-ласка, введiть температуру у градусах за Цельсiєм: ";
    cin >> celsius;

    double fahrenheit = ConvertToFahrenheit(celsius);

    cout << celsius << " градусiв за Цельсiєм дорiвнює " << fahrenheit << " градусiв за Фаренгейтом" << endl;
}

int main() {
    setlocale(LC_ALL, "UKR");
    PrintTemp();

    return 0;
}
