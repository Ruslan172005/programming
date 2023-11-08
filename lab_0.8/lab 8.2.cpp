#include <iostream>
using namespace std;

void PrintSymbol(char symbol, int count) {
    for (int i = 0; i < count; i++) {
        cout << symbol;
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "UKR");
    char symbol;
    int count;

    cout << "Введiть символ: ";
    cin >> symbol;

    cout << "Введiть кiлькiсть: ";
    cin >> count;

    if (count != 0) {
        PrintSymbol(symbol, count);
    }
    else {
        cout << "Кiлькiсть повинна бути не нуль." << endl;
    }

    return 0;
}
